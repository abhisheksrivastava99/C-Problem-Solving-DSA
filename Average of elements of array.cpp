#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n;float sum=0;
float avg;
cout<<"Size of array :";
cin>>n;
int arr[n];
cout<<"Enter numbers of an array ";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int j=0;j<n;j++)
{
sum=sum+arr[j];
avg=(sum/n);
}
cout<<"Average of elements is : "<<avg<<endl;
return 0;
}
