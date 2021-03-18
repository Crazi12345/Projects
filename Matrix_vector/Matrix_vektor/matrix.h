#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

class Matrix
{
public:
  Matrix();
  Matrix(const int rows, const int cols, double val =0);
  void print();
  void set(int r, int c, double val);
  double read(int r, int c);
  Matrix add(const Matrix* matrix);
  Matrix multiply(const Matrix* matrix);
  const int rows;
  const int cols;
private:
  std::vector<double> data;
};

#endif // MATRIX_H
