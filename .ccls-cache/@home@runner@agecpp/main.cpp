#include <iostream>
using namespace std;

int main() {
  int n;
  long long newn = 0;
  cin>>n;
  for(int i = 0; i<n-1; i++){
    if(n-1*n-1+n-2==n){
      newn++;
      n--;
      continue;
    }
    newn++;
    n--;
  }
  cout<<newn;
}