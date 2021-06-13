#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    float d;
    cout << "Enter quadratic coefficients" <<endl;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d==0){cout<<"Roots are real and equal";}
    else if(d>0){cout<<"Roots are real and unequal";}
    else if(d<0){cout<<"Roots are imaginary";}

    return 0;
}
