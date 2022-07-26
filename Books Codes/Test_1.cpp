#include<iostream>
using namespace std;
int main()
{
    float balance, zakat;
    const float per=0.05;
    cout<<"Enter your balance "<<endl;
    cin>>balance;
    zakat=balance*per;
    balance=balance-zakat;
    cout<<"Your balance after zakat detuaction is "<< balance<<endl;
    cout<<"Zakat detuted is "<<zakat<<endl;
    return 0;
}
