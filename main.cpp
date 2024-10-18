#include<iostream>
#include "matrix.hpp"
int main(){
  size_t M=0,N = 0;
  std::cin >> M >>N;
  int ** t = ct_table(M,N);
  delet(t,M,N);
}

