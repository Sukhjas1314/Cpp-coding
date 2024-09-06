// #include<iostream>
// using namespace std;
// int main(){
//   int arr[5] = {4,1,5,2,6};
//   for(int i = 4 ; i >= 0 ; i--){
//     cout << arr[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }



#include<iostream>
using namespace std;
int main(){
  int arr[] = {4,1,5,2,6};
  int n = sizeof(arr)/4;
  for(int i = 0 ; i < n ; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  int i = 0;
  int j = n-1;
  while(i < j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  for(int i = 0 ; i < n ; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
