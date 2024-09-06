#include<iostream>
using namespace std;
int main(){
  int arr[] = {20,7,55,4,798,3,95,8,5,387};
  int min = arr[0];
  int smin = arr[0];
  for(int i = 0 ; i < 10 ; ++i){
    if(min > arr[i]){
      smin = min;
      min = arr[i];
    }else if (arr[i] < smin && arr[i] != min){
        smin = arr[i];
    }
  }
if (min == smin) {
        cout << "There is no second smallest element." << endl;
    } else {
        cout << "The second smallest element is: " << smin << endl;
    }
  return 0;
}