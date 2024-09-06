#include<iostream>
using namespace std;
int main(){
  int arr[] = {4,2,7,9,6,4,5,3,9,9};
  int even = 0;
  int odd = 0;
  for(int i = 0 ; i < 10 ; i++){
    if(i % 2 == 0){
      even += arr[i];
    }else {
      odd += arr[i];
    }
  }
  cout << "The difference between the sum of elements at even indices and that at the odd indices is : " << even-odd << endl;
  return 0;
}