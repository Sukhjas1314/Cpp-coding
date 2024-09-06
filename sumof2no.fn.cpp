#include<iostream>
using namespace std;
int add(int x,int y){
  return x+y;
}
int main(){
  int a,b;
  cout << "Enter the value of a & b : ";
  cin >> a >> b;
  int sum = add(a,b);
  cout << "The sum is : " << sum << endl;
  return 0;
}