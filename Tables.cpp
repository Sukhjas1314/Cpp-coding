          // Table of 19
// #include<iostream>
// using namespace std;
// int main(){
//   int n = 10;
//   for(int i = 0 ; i <= n; i++){
//     cout << 19 << " * " << i << " = " << 19 * i << endl;
//   }
//   return 0;
// }



          //  Table of n
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  for(int i = 1 ; i <= 10 ; i++){
    cout << n << " * " << i << " = " << n * i << endl;
  }
  return 0;
}