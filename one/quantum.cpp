#include "quantum.hpp"

State::State(int NQUBITS, const Vector& state) : state(state), NQUBITS(NQUBITS) {
    assert(state.rows() == pow2(NQUBITS));
}

State::~State(void) {

}

void State::showOutcomes(void) {
    Vector probabilities  = this->state.array() * this->state.conjugate().array();

    printf("State | Percentage\n");
    for(int i = 0; i < this->state.rows(); i++) {
        printBin(i, this->NQUBITS);
        printf(" | %.2f\n", probabilities[i].real() * 100.0);
    }
}
