#include<iostream>
using namespace std;
int main(){
  int n,m;
  cout << "Enter the no. of rows and columns : ";
  cin >> n >> m;
  int arr[n][m];
  int mn = INT_MAX;
  cout << "Enter the elements of the array : ";
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cin >> arr[i][j];
    }
    cout << endl;
  }
  for(int i  = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      mn = min(mn,arr[i][j]);
    }
  }
  cout << mn << endl;
  return 0;
}