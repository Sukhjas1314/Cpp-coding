// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout << "Enter the value of n : ";
//   cin >> n;
//   int r = 0;
//   while(n != 0){
//     int ld = n % 10;
//     r = r * 10;
//     r = r + ld;
//     n = n / 10;
//   }
//   cout << "The reverse no. is : " << r << endl;
//   return 0;
// }



          // Sum of original no. & its reverse
#include<iostream>
using namespace std;
int main(){
  int n,x;
  cout << "Enter the value of n : ";
  cin >> n;
  x = n;
  int r = 0;
  while(n != 0){
    int ld = n % 10;
    r = r * 10;
    r = r + ld;
    n = n / 10;
  }
  cout << "The reverse no. is : " << r << endl;
  cout << "The sum of the original no. & its reverse is : " << r + x << endl;
  return 0;
}