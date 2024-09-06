// #include<iostream>
// using namespace std;
// int main(){
//   int n,m;
//   cout << "Enter the no. of rows and columns : ";
//   cin >> n >> m;
//   int arr[n][m];
//   int sum = 0;
//   cout << "Enter the elements of the array : ";
//   for(int i = 0 ; i < n ; i++){
//     for(int j = 0 ; j < m ; j++){
//       cin >> arr[i][j];
//     }
//     cout << endl;
//   }
//   for(int i  = 0 ; i < n ; i++){
//     for(int j = 0 ; j < m ; j++){
//       sum += arr[i][j];
//     }
//   }
//   cout << sum << endl;
//   return 0;
// }



              // sum of the given rectangle from the end coordinates
#include<iostream>
using namespace std;
int main(){
  int n,m;
  cout << "Enter no. of rows and columns of the array : ";
  cin >> n >> m;
  int arr[n][m];
  int sum = 0;
  cout << "Enter the elements of the array : ";
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cin >> arr[i][j];
    }
  }
  cout << endl;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  for(int i = 1 ; i <= 4 ; i++){
    for(int j = 1 ; j <= 2 ; j++){
      cout << arr[i][j] << " ";
      sum += arr[i][j];
    }
    cout << endl;
  }
  cout << endl;
  cout << sum << endl;
  return 0;
}
