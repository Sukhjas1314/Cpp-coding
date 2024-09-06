#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  for(int i = 0;i <= n;i++){
    int product = 1;
    for(int j = 1 ; j <= i ; j++){
    product *= j;
    }
  cout << i << "! : " << product << endl;
  }
  return 0;
}