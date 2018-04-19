#include "general.hpp"

class State {
private:
    Vector state;
    int NQUBITS;
    std::random_device rd;
    std::mt19937_64 generator;
    std::uniform_real_distribution<T> distribution;

public:
    State(int NQUBITS, const Vector& state) : this->state(state), this->NQUBITS(NQUBITS) {
        assert();
    }

    ~State(void) {

    }

    void showOutcomes(void) {
        Vector probabilities = this->state.array() * this->state.conjugate().array();
    }
}
