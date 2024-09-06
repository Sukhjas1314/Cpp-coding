          // AP [1,3,5,7,9,...,n]
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout << "Enter the value of n : ";
//   cin >> n;
//   for(int i = 1 ; i <= n ; i += 2){
//    cout << i << " ";
//   }
//   return 0;
// }


        // GP [1,2,4,8,16,32,...]
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  int a = 1;
  for(int i = 0 ; i <= n ; i++){
    cout << a << " ";
    a = a * 2;
  }
  cout << endl;
  return 0;
}