#include<iostream>
using namespace std;
int main(){
int a,b,n,c;
cout<<"Enter your choice ";
cin>>c;
cout<<"Enter two number: ";
cin>>a>>b;
switch (c)
{
case 1:
    n=a+b;
    break;
case 2:
 n=a-b;
 break;
case 3:
  n=a*b;
  break;
case 4:
  n=a/b;
  break;
case 5:
 n=a%b;
 break;
default:
    break;
}
cout<<"Result: "<<n;

return 0;
}