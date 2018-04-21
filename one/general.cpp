#include "general.hpp"

int pow2(int exp) {
    return (exp == 0) ? 1 : 2 * pow2(exp - 1);
}

void printBin(int N, int BITS) {
    for(int i = BITS - 1 ; i >= 0; i--) {
        if((N >> i) & 0x1) {
            putchar('1');
        }
        else {
            putchar('0');
        }
    }
}

Vector zero(void) {
    Vector result(2);
    result << 1.0, 0.0;
    return result;
}

Vector one(void) {
    Vector result(2);
    result << 0.0, 1.0;
    return result;
}

Vector basis(int N, int NQUBITS) {
    Vector basis(1);
    int highBit;
    int remaining = N;
    basis << 1.0; //identity element for the tensor product

    for(int i = NQUBITS - 1; i >= 0; i--) {
        highBit = remaining >> i; //get the highest bit
        remaining = ~(1 << i) & remaining; //get the remaining bits

        if(highBit) {
            basis = kroneckerProduct(basis, one()).eval();
        }
        else {
            basis = kroneckerProduct(basis, zero()).eval();
        }
    }

    return basis;
}
