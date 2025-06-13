#include <iostream>
using namespace std;
int main() {
 int x,y,z;
 cout<<"Enter a first number:";
 cin>>x;
 cout<<"Enter second number:";
 cin>>y;
 
 
 cout<<"ADDITION"<<endl;
 cout<<"SUBTRACTION"<<endl;
 cout<<"MULTIPLICATION"<<endl;
 cout<<"DIVISION"<<endl;
 cout<<"ENTER YOUR CHOICE : ";
 cin>>z;
 
 if(z == 1){
     cout<<"ADDITION ="<<x + y<<endl;
 }
 else if(z == 2){
      cout<<"SUBTRACTION ="<<x - y<<endl;
     
 }else if(z == 3){3
      cout<<"MULTIPLICATION ="<<x * y<<endl;
 }
 else if(z == 4){
      cout<<"DIVISION ="<<x / y<<endl;
 }
 else {
      cout<<"INVAILID OUTPUT ="<<endl;
 }
    return 0;
}
