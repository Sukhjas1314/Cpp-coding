#include<iostream>
#include<cmath>
using namespace std;
int factorial(int a){
  int product = 1;
  for(int i = 1 ; i <= a ; i++){
    product *= i;
  }
  return product;
}
int combination(int n,int r){
  return factorial(n)/(factorial(r) * factorial(n-r));
}
int permutation(int a,int b){
  return factorial(a)/factorial(a-b);
}
int main(){
  int n,r;
  cout << "Value of n : ";
  cin >> n;
  cout << "Value of r : ";
  cin >> r;
  cout << n << "C" << r <<  " : " << combination(n,r) << endl;
  cout << n << "P" << r <<  " : " << permutation(n,r) << endl;
  return 0;
}