#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  int arr[n],sum = 0;
  cout << "Enter the elements of the array : ";
  for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
  }
  for(int i = 0 ; i < n ; i++){
    sum = sum + arr[i];
  }
  cout << "The sum of the elements of the array is : " << sum << endl;
  return 0;
}