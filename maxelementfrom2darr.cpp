#include<iostream>
using namespace std;
int main(){
  int arr[3][3] = {{3,54,4},{7,65,9},{4,2,8}};
  int mx = INT_MIN;

  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      mx = max(mx,arr[i][j]);
    }
  }
  cout << mx << endl;
  return 0;
}