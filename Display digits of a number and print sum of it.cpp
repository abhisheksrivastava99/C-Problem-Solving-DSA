#include <iostream>
using namespace std;

int main()
{
int num,c,sum=0;
cout<<"Enter value of num ";
cin>>num;
for(;num!=0;)
{
if(num>0)
{
c=num%10;
sum=sum+c;
num=num/10;
cout<<c<<"\n"<<endl;
}
}
cout<<"Sum of digits="<<sum<<endl;
return 0;
}
