#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  int count = 0;
  int sum = 0;
  while (n > 0){
    int ld = n % 10;
    n = n / 10;
    sum = sum + ld;
    count++;
  }
  cout << "The no. of digits are : " << count << endl;
  cout << "The sum of digits of the no. : " << sum;
  cout << endl;
  return 0; 
}