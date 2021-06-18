#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n,A[n];
cout<<"Size of array :";
cin>>n;
cout<<"Enter numbers of an array ";
for(int i=0;i<n;i++)
{
cin>>A[i];
}
for(int j=n-1;j>=0;j--)
{
cout<<A[j]<<" ";
}
return 0;
}
