#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the size of the array : ";
  cin >> n;
  int arr[n];
  cout << "The array is  : ";
  for(int i = 0 ; i < n ; ++i){
    cin >> arr[i];
  }
  bool flag = true;

  for(int i = 0 ; i < n/2 ; i++){
    if(arr[i] != arr[n - 1 - i]){
      flag = false;
      break;
    }
  }

  if(flag == true){
      cout << "It is a palindrome.";
    }else{
      cout << "It is not a palindrome.";
    }
  cout << endl;
  return 0;
}