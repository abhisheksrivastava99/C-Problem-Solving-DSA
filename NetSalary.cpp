#include <iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
    float BasicSalary,PofAllowances,PofDeductions,NetSalary;
    cout<<"Enter Basic salary, percentage of allowances and percenatage of deductions";
    cin>>BasicSalary>>PofAllowances>>PofDeductions;
    NetSalary=BasicSalary+BasicSalary*(PofAllowances/100)-BasicSalary*(PofDeductions/100);
    cout<<"Net salary  is "<<" "<< NetSalary <<endl;
    return 0;
}
