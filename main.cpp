#include<iostream>
#include "matrix.hpp"
int main(){
  size_t M=0,N = 0;
  std::cin >> M >>N;
  if (!std::cin){
    std::cerr<<"Not a number\n";
    return 1;
  }
  try{
    int ** t = ct_table(M,N);
  }
  catch(const std::bad_alloc & e){
    std::cerr<<"Out of memory\n";
    return 1;
  };
  inn(t,M,N);
  out(t,M,N);  
  delet(t,M,N);
}

