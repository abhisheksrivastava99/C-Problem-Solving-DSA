#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int num,r,rev=0,temp;
cout<<"Enter value of num ";
cin>>num;
temp=num;
if(num>0)
{
for(;num!=0;)
{
r=num%10;
num=num/10;
rev=rev*10+r;
}
if(rev==temp){cout<<temp<< " is palindrome\n";}
else{cout<<temp<< " is not palindrome\n";}
return 0;
}
}
