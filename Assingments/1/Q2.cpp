#include<iostream>
using namespace std;
void diagonal(int A[3][3]);
int main()
{
    cout<<"Enter the elements of array"<<endl;  
    int a[3][3];
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout<<"array ["<<r<<"]"<<"["<<c<<"]: ";
            cin>>a[r][c];
        }
        cout<<endl;
    }
    diagonal(a);


}

void diagonal(int arr[3][3])
{
    int left_sum=0;                           
    int right_sum=0;                
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(i==j)
          {
              left_sum=left_sum+arr[i][j];
          }
          if(i+j==2)
          {
              right_sum=right_sum+arr[i][j];
          }
        }
    }
    cout<<"SUM OF LEFT diagonal IS : "<<left_sum<<endl;
    cout<<"SUM OF RIGHT diagonal IS: "<<right_sum<<endl;
}