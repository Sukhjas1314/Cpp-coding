#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,3,20,10,2,5,6};
  int x = 4,count = 0;
  for(int i = 0 ; i < 7 ; i++){
    if(arr[i] > x){
      count++;
    }
  }
  cout << count << endl;
  return 0 ;
}