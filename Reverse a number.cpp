#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int num,r,rev=0;
cout<<"Enter value of num ";
cin>>num;

if(num>0)
{
for(;num!=0;)
{
r=num%10;
num=num/10;
rev=rev*10+r;
}
cout<<rev<<endl;
return 0;
}
}
