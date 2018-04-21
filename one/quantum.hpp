#ifndef QUANTUM
#define QUANTUM

#include "general.hpp"

class State {
private:
    Vector state;
    int NQUBITS;

public:
    State(int NQUBITS, const Vector& state);
    ~State(void);
    void showOutcomes(void);
};
#endif
