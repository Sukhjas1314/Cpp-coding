// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cout<<"Enter the value of a : ";
//   cin>>a;
//   if (a%2 == 0){
//     cout<<"It's an even number."<<endl;
//   }else {
//     cout<<"It's an odd number."<<endl;
//   }
// }




      // Even numbers
// #include<iostream>
// using namespace std;
// int main(){
//   for(int i = 0 ; i <= 100 ; i += 2){
//     cout << i << endl;
//   }
//   return 0;
// }




      // Odd no. from 1 to 100 using continue
#include<iostream>
using namespace std;
int main(){
  for(int i = 1 ; i <= 100 ; i++){
    if (i % 2 == 0){
      continue;
    }
      cout << i << " ";
  }
  cout << endl;
  return 0;
}

