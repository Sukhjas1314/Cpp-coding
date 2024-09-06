#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  int product = 1;
  while(n > 0){
    int ld = n % 10;
    n = n / 10;
    product *= ld;
  }
  cout << "The product is : " << product << endl;
  return 0;
}