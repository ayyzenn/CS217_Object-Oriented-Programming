#include<iostream>
using namespace std;
int main()
{
  int r1,r2,c1,c2,sum;
  cout<<"Enter number of rows for first Array: "<<endl;
  cin>>r1;
  cout<<"Enter number of columns for first Array: "<<endl;
  cin>>c1;
  cout<<"Enter number of rows for Second Array: "<<endl;
  cin>>r2;
  cout<<"Enter number of columns for Second Array: "<<endl;
  cin>>c2;
  int a1[r1][c1];
  int a2[r2][c2];
  int num[c1][r2];
  cout<<endl;


  if(c1==r2)
  {
    
    cout<<"Enter the elements of array 1:"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Aarry1["<<i<<"]["<<j<<"]=";
            cin>>a1[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Enter the elements of array 2:"<<endl;
    for(int i=0;i<r2;i++)
    {
      for(int j=0;j<c2;j++)
      {
        cout<<"Array2["<<i<<"]["<<j<<"]=";
        cin>>a2[i][j];
      }
      cout<<endl;
    }
    cout<<endl;

    for(int r=0;r<c1;r++)
    {
        
        for(int c=0;c<r2;c++)
        {
           sum=0; 
           for(int k=0;k<c2;k++)
           {
               sum=sum+a1[r][k]*a2[k][c];
           }
           num[r][c]=sum;
           
        }
    }
    cout<<"Multiplication of Array is:"<<endl;
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r2;j++)
        {
            cout<<num[i][j]<<"\t";
        }
        cout<<endl;
    }


  }
 
  else
  cout<<"Number of columns in first array are not equal to the number of rows in second array.";

}