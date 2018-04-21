#ifndef QUANTUM_GENERAL
#define QUANTUM_GENERAL

#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <Eigen/KroneckerProduct>

typedef std::complex<float> Complex;
typedef Eigen::Matrix<Complex, Eigen::Dynamic, 1> Vector;
typedef Eigen::SparseMatrix<Complex> Matrix;

int pow2(int exp);
void printBin(int N, int BITS);
//return |0>
Vector zero(void);

//return |1>
Vector one(void);

//returns |N> for a space of size NQUBITS
Vector basis(int N, int NQUBITS);
#endif
