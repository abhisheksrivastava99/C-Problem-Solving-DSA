#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int num1,num2;
cout<<"Enter two numbers ";
cin>>num1>>num2;
for(;num1!=num2;)
{
if(num1>num2){num1=num1-num2;}
else if(num2>num1){num2=num2-num1;}
}
cout<<"GCD of two numbers is"<<" "<<num1<<endl;

return 0;
}
