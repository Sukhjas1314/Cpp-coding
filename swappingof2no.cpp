#include<iostream>
using namespace std;
int main(){
  int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"Value of a after swapping : "<<a;
    cout<<endl<<"Value of b after swapping : "<<b<<endl;

}