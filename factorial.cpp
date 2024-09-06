// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   int product = 1;
//   cout << "Enter the value of n : ";
//   cin >> n;
//   while (n != 0){
//     for(int i = 1 ; i <= n ; i++){
//     product *= i;
//     }
//     n++;
//   }
  
//   cout << "The factorial is : " << product << endl;
//   return 0;
// }



                // Factorial using recursion
#include<iostream>
using namespace std;
int fact(int n){
  if (n == 0){
    return 1;
  }
  return n*fact(n-1);
}
int main(){
  cout << fact(4) << endl;
  return 0;
}