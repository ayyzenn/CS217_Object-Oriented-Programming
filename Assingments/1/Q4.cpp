#include<iostream>
using namespace std;
int a[13][13];
void show(int a[][13],int x)

{
    int m,n;
    cout<<"Enter the number of rows ";
    cin>>m;
    cout<<"Enter the number of columns ";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"-----------------------------------------------------"<<endl;
    for (int  i = 0; i < x; i++)
    {
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<" ";
        }
        for (int j = i; j < x; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    show(a,n);
    return 0;
}
