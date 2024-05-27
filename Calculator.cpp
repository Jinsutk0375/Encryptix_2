#include<iostream>
using namespace std;

int main(){
  char operation;
  float num1,num2;

  cout<<"Enter the two numbers : "<<endl;
  cin>>num1;
  cin>>num2;

  cout<<"Choose the operation to perform(+ ,- ,* ,/) : "<<endl;
  cin>>operation;


  switch (operation)
  {
  case '+':
    cout<<num1<< "+" <<num2<< "=" << num1 + num2<<endl; 
    break;

  case '-':
    cout<<num1<< "-" <<num2<< "=" << num1 - num2<<endl; 
    break;

  case '*':
    cout<<num1<< "*" <<num2<< "=" << num1 * num2<<endl; 
    break;

  case '/':
    if (num2 != 0)
    cout<<num1<< "/" <<num2<< "=" << num1 / num2<<endl; 
    else
    cout<<"ERROR! division by 0 is invalid"<<endl;
    break;
  
  default:
  cout<<"ERROR! Invalid Opertaor"<<endl;
    break;
  }

  return 0;
}