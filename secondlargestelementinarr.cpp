#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,2,55,4,798,3,95,10,5,387};
  int max = arr[0];
  for(int i = 0 ; i < 10 ; i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  int smax = arr[0];
  for(int i = 0 ; i < 10 ; i++){
    if(smax < arr[i]){
      if(arr[i] != max){
        smax = arr[i];
      }
    }
  }
  cout << max << " " << smax << endl;

  return 0;
}