#ifndef xRz_pdd_hpp
#define xRz_pdd_hpp 1

#include "TMBtools/MatrixIP.hpp"

#undef TMB_OBJECTIVE_PTR
#define TMB_OBJECTIVE_PTR obj
template <class Type>
Type xRz_pdd(objective_function<Type>* obj) {
  PARAMETER_VECTOR(x);
  DATA_VECTOR(z);
  DATA_MATRIX(R);
  return MatrixIP(x, z, R);
}
#undef TMB_OBJECTIVE_PTR
#define TMB_OBJECTIVE_PTR this

#endif
