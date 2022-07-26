#include <iostream>
#include<string>
using namespace std;
int main()
{
    int feet,inches,total_length;
    float cm;
    cout<<"Enter the length in feets: ";
    cin>>feet;
    cout<<"Enter the length in inches: ";
    cin>>inches;
    total_length=(12*feet) + inches;
    cm=total_length*2.54;
    cout<<"Total length in Inches is: "<<total_length<<" and the toatal length in Centimeters: "<<cm<<endl;
    return 0;
}
