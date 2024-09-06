#include<iostream>
using namespace std;
int main(){
  int n1,n2;
  char operators;
  cout << "Enter value of n1 : ";
  cin >> n1;
  cout << "Enter the operator : ";
  cin >> operators;
  cout << "Enter value of n2 : ";
  cin >> n2;

  switch (operators){
    case '+':
      cout << n1 + n2 << endl;
      break;
    case '-':
      cout << abs(n1 - n2) << endl;
      break;
    case '*':
      cout << n1 * n2 << endl;
      break;
    case '/':
      cout << n1 / n2 << endl;
      break;
    default :
      cout << "Invalid operator" << endl;
  }
  return 0;
}