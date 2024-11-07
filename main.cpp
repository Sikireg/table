#include<iostream>
#include "matrix.hpp"
int main(){
  size_t M=0,N = 0;
  std::cin >> M >> N;
  if (!std::cin){
    std::cerr<<"Not a number\n";
    return 1;
  }
  Matrix mtx(M, N);
  mtx.inn(std::cin);
  if (!std::cin)
  {
    return 1;
  }
  mtx.onn(std::cout);
}

