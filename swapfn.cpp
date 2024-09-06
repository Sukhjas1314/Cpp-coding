
                                // Using ptr(*) swapping
#include<iostream>
using namespace std;
void swap(int* x,int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
  return;
}
int main(){
  int a,b;
  cout << "Enter the value of a & b : ";
  cin >> a >> b;
  swap(&a,&b);
  cout << "After swapping value of a & b : " << a << " " << b << endl;
  return 0;
}