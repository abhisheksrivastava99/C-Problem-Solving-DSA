#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int m,n,sum=0;
cout<<"Size of array :";
cin>>n;
int arr[n];
cout<<"Enter numbers of an array ";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
m=arr[0];
for(int j=0;j<n;j++)
{
if(arr[j]<m){m=arr[j];}
}
cout<<"Min is : "<<m<<endl;
return 0;
}
