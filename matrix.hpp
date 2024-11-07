#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <cstddef>
#include <iostream>
#include <fstream>
void delet(int** t, size_t m);
int ** ct_table(size_t m,size_t n);
void inn(std::istream & in, int** t,size_t m, size_t n);
void output(std::ostream & out, const int* const* t,size_t m, size_t n);
class Matrix
{
  int** t_;
  size_t m_, n_;
public:
  ~Matrix()
  {
    ::delet(t_, m_);
  }
  Matrix(size_t m, size_t n):
  t_(::ct_table(m, n)), m_(m), n_(n)
  {}
  void inn(std::istream & in)
  {
    ::inn(in, t_, m_, n_);
  }
  void onn(std::ostream & out) const
  {
    ::output(out, t_, m_, n_);
  }
  size_t get_row() const;
  size_t get_column() const;
};
#endif
