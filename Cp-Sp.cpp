#include<iostream>
using namespace std;
int main(){
  int cp,sp;
  cout<<"Enter the Cost Price : ";
  cin>>cp;

  cout<<"Enter the Selling Price : ";
  cin>>sp;

  if (cp > sp){
    cout<<"You have incurred a loss of : "<<cp-sp<<endl;
  }else if (sp > cp){
    cout<<"You have earned a profit of : "<<sp-cp<<endl;
  }else {
    cout<<"There is neither a loss nor a profit."<<endl;
  }
  return 0;
}