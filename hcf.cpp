#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  for(int i = 0 ; i <= n ; i++){
    if(n % i == 0){
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}