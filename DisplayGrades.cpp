#include <iostream>

using namespace std;

int main()
{
    float m1,m2,m3,avg,percent;
    cout << "Enter marks of 3 subjects out of 100" <<endl;
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/300;
    percent=avg*100;
    if(percent>=60){cout<<"Grade is"<<" "<<"A"<<endl;}
    else if(percent>=35 && percent<60){cout<<"Grade is"<<" "<<"B"<<endl;}
    else if(percent<35){cout<<"Grade is"<<" "<<"C"<<endl;}

    return 0;
}
