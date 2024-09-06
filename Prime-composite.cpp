#include<iostream>
using namespace std;
int main(){
  int n;
  bool flag = true;
  cout << "Enter the value of n : ";
  cin >> n;
  for(int i = 2 ; i <= n/2 ; i++){
    if(n % i == 0){
      flag = false;
      break;
    } 
  }
  if(n == 1){
    cout << "Neither prime nor composite.";
   }else if (flag == true){
     cout << "Prime no.";
   }else {
     cout << "Composite no.";
   }
  cout << endl;
  return 0;
}