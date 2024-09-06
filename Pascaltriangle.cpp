#include<iostream>
using namespace std;
int factorial(int a){
  int product = 1;
  for(int i = 1 ; i <= a ; i++){
    product *= i;
  }
  return product;
}
int combination(int x,int y){
  return factorial(x)/(factorial(y) * factorial(x-y));
}
int main(){
  int n,r;
  cout << "Enter the value of n : ";
  cin >> n;
  cout << "Enter the value of r : ";
  cin >> r;
  for(int i = 0 ; i <= n ; i++){
    for(int j = 0 ; j <= n - i - 1 ; j++){
      cout << "  ";
    }
    for(int j = 0 ; j <= i ; j++){
      cout << combination(i,j) << "   ";
    }
    cout << endl;
  }
  return 0;
}