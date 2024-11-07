#include "matrix.hpp"
#include <iostream>
void inn(std::istream & in, int** t,size_t m, size_t n){
  for (size_t i = 0; i<m;i++){
    for (size_t j = 0; j<n;j++){
      in>>t[i][j];
    }
  }
}
void output(std::ostream & out,const int* const* t,size_t m, size_t n){
  for(size_t i = 0; i<m; i++){
    std::cout<<t[i][0];
    for (size_t j = 1; j<n; j++){
      out << " "<<t[i][j];
    }
    out << "\n";
  }
}
void delet(int ** t, size_t m){
for (size_t i = 0; i<m; ++i){
    delete [] t[i];
  }
delete [] t;
}
int ** ct_table(size_t m,size_t n){
  int** t = new int*[m];
  size_t created = 0;
  try{
    for(;created<n;++created){
      t[created] = new int[n];
    }
  }
  catch(const std::bad_alloc &e){
    delet(t,created);
    throw;
  }
  return t;
}

size_t Matrix::get_row() const
{
  return m_;
}
size_t Matrix::get_column() const
{
  return n_;
}
