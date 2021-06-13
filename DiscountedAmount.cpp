#include <iostream>

using namespace std;

int main()
{
    float TotalAmount,discount,bill;
    cout << "Enter total amount" <<endl;
    cin>>TotalAmount;
    if(TotalAmount<100){cout<<"No discount";}
    else if(TotalAmount>=100 && TotalAmount<500)
    {
    discount=0.10*TotalAmount;
    bill=TotalAmount-discount;
    cout<<"Bill after discount of"<<" "<<"10%"<<" is"<<" "<<bill<<endl;
    }
    else if(TotalAmount>=500)
    {
    discount=0.20*TotalAmount;
    bill=TotalAmount-discount;
    cout<<"Bill after discount of"<<" "<<"20%"<<" is"<<" "<< bill<<endl;
    }
    return 0;
}
