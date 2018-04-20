#include "quantum.hpp"

int main(int argc, char **argv) {
    float norm = 1.0f / sqrt(2.0f);
    State state(3, norm * basis(0, 3) + norm * basis(5, 3));

    state.showOutcomes();
    return 0;
}
