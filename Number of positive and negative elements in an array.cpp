#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n,c1=0,c2=0;
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
if(arr[j]<0){c1++;}
else if(arr[j]>0){c2++;}
}
cout<<"Number of positive elements is: "<<c2<<endl;
cout<<"Number of negative elements is: "<<c1<<endl;
return 0;
}
