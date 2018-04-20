#include "general.hpp"

class State {
private:
    Vector state;
    int NQUBITS;

public:
    State(int NQUBITS, const Vector& state) : state(state), NQUBITS(NQUBITS) {
        assert(state.rows() == pow2(NQUBITS));
    }

    ~State(void) {

    }

    void showOutcomes(void) {
        Vector probabilities  = this->state.array() * this->state.conjugate().array();

        printf("State | Percentage\n");
        for(int i = 0; i < this->state.rows(); i++) {
            printBin(i, this->NQUBITS);
            printf(" | %.2f\n", (float) probabilities[i].real() * 100.0);
        }
    }
};
