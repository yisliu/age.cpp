#include <iostream>
using namespace std;

long long f(int n){
  //prevent 0
  if(n<=2){
    return 1;
  }
  //arrangement methods
  return (n-1)*(f(n-1)+f(n-2));
}

int main() {
  int n;
  //input
  cin>>n;
  //output
  cout<<f(n);
}