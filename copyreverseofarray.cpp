#include<iostream>
using namespace std;
int main(){
  int arr[5] = {1,2,3,4,5};
  int brr[5];
  for(int i = 4 ; i >= 0 ; i--){
    brr[i] = arr[i];
    cout << brr[i] << " ";
  }
  cout << endl;
  return 0;
}