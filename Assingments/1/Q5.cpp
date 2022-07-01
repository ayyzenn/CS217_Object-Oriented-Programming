
#include<iostream>
using namespace std;
int arr[13][13];
void mid(int a[][13],int x)
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
            cin>>arr[i][j];
        }
    }
    cout<<"-----------------------------------------------------"<<endl;
    int mid=x/2;
    cout<<"Mid row:"<<"\t";
    for (int  i = 0; i < x; i++)
    {
        cout<<a[mid][i]<<"\t";
    }
    cout<<endl;
    cout<<"Mid col:"<<"\t";
    for (int j = 0; j < x; j++)
    {
        cout<<a[j][mid]<<"\t";
    }
    cout<<endl;
}
int main()
{
     
    mid(arr,3);
    return 0;
}
