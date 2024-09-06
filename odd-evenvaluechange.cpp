#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  for(int i = 0 ; i < 10 ; i++){
    if(i % 2 != 0){
      cout << arr[i]*2 << " ";
    }else{
      cout << arr[i]+10 << " ";
    }
  }
  cout << endl;
  return 0;
