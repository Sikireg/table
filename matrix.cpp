#include "matrix.hpp"
void inn(int** t,size_t m, size_t n){
  for (size_t i = 0; i<M,i++){
    for (size_t j = 0; j<N,j++){
      std::cin>>t[i][j];
    }
  }
}
void out(const int* const* t,size_t m, size_t n){
  for(size_t i = 0, i<M, i++){
    std::cout<<t[i][0];
    for (size_t j = 1, j<N, j++){
      std::cout << " "<<t[i][j];
    }
    std::cout<<"\n";
  }
}
void delet(int ** t, size_t m){
for (size_t i = 0; i<m; ++i){
    delete [] t[i];
  }
delete [] t;
}
int ** cr_table(size_t m,size_t n){
  int** t = new int*[m];
  size_t created = 0;
  try{
    for(;created<n;++created){
      t[created0 = new int[n];
    }
  }
  catch(const std::bad.alloc & e){
    dt(t,created);
    throw;
  }
  return t
}
