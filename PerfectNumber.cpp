#include <iostream>
using namespace std;
int main()
{
int num;
int SumFactors=0;
cout << "Enter value of num: ";
cin >> num;
for(int i=1;i<=num;i++)
{
if(num%i==0)
{
SumFactors=SumFactors+i;
}
}
if((2*num)==SumFactors){cout<<"Number is perfect"<<endl;}
else{cout<<"Number is not perfect"<<endl;}
cout<<SumFactors;
return 0;
}
