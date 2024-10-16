#include<iostream>
void delet(int** t, size_t m, size_t n);
int ** ct_table(size_t m,size_t n);
void inn(int** t,size_t m, size_t n);
void out(const int* const* t,size_t m, size_t n);
int main(){
  size_t M=0,N = 0;
  std::cin >> M >>N;
  int ** t = ct_table(M,N);
  delet(t,M,N);
}
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

