#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int num,power,r,count=0,sum=0,tempnum;
cout<<"Enter value of num ";
cin>>num;
tempnum=num;
if(tempnum>0)
{
for(;tempnum!=0;)
{
tempnum=tempnum/10;
count++;
}
tempnum=num;
for(;tempnum!=0;)
{
r=tempnum%10;
sum=sum+pow(r,count);
tempnum=tempnum/10;
}
if(sum==num){cout<<num << " is a Armstrong number"<<endl;}
else{cout<<num <<" is not a Armstrong number"<<endl;}
}
return 0;
}
