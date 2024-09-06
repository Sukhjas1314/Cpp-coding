#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n : ";
  cin>>n;

      // Divisibility test for 2 & 3
  if (n % 2 == 0 && n % 3 == 0){
    cout<<n<<" is an even number which is divisible by 3."<<endl;
  }else if (n % 2 == 0 && n % 3 != 0){
    cout<<n<<" is an even number but not divisible by 3."<<endl;
  }else if (n % 3 == 0 && n % 2 != 0){
    cout<<n<<" is not an even number but is divisible by 3."<<endl;
  }else{
    cout<<n<<" is neither divisible by 2 nor 3."<<endl;
  }

      // Divisibility test for 3 & 5
  if (n % 3 == 0 && n % 5 == 0){
    cout<<n<<" is divisible by both 3 & 5."<<endl;
  }else if (n % 3 == 0 && n % 5 != 0){
    cout<<n<<" is divisible by 3 but not by 5."<<endl;
  }else if (n % 5 == 0 && n % 3 != 0){
    cout<<n<<" is not divisible by 3 but is divisible by 5."<<endl;
  }else{
    cout<<n<<" is neither divisible by 3 nor 5."<<endl;
  }
  return 0;
}