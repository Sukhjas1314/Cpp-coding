#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter your age : ";
  cin>>age;

  if (age < 12){
    cout<<"You are a Child."<<endl;
  }else if (age >= 12 && age <= 18){
    cout<<"You are a Teenager."<<endl;
  }else if (age > 18 && age < 50){
    cout<<"You are an Adult."<<endl;
  }else if (age >= 50){
    cout<<"You are a Senior Citizen."<<endl;
  }
}