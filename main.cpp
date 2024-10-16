#include<iostream>
void delet(int** t, size_t m, size_t n);
int ** ct_table(size_t m,size_t n);
int main(){
  size_t M=0,N = 0;
  std::cin >> M >>N;
  int ** t = ct_table(M,N);
  delet(t,M,N);
}
