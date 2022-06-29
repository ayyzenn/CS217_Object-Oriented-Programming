#include<iostream>
using namespace std;
void input_element(int &m,int &n);
void display_matrix(int m, int n);
void sum(int m, int n);
void row_sum(int m, int n);
void col_sum(int m, int n);
int A[1000][1000];
int main()
{
    int a,b;
    int choice = 0;
	do
	{
		cout<<"\n\nMENU";
		cout<<"\n1. Input elements of array";
		cout<<"\n2. Display elements of array";
		cout<<"\n3. Sum of all elements of array";
		cout<<"\n4. Row-wise sum of elements of array";
		cout<<"\n5. Column-wise sum of elements of array";
		cout<<"\n6. Exit";
		cout<<"\n\nEnter your choice 1-6 :";
		cin>>choice;
		switch(choice)
		{
			case 1: input_element(a,b);
                break;
            case 2: display_matrix(a,b);
                break;
            case 3: sum(a,b);
                break;
            case 4: row_sum(a,b);
                break;
            case 5: col_sum(a,b);
                break;
            case 6: 
                break;    
			default:
                cout<<"\nInvalid choice";
		}
	}while(choice!=6);
	return 0;
}
void input_element(int &m,int &n)
{
    cout<<"Enter the number of rows ";
    cin>>m;
    cout<<"Enter the number of columns ";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>A[i][j];
        }
    }
}
void display_matrix(int m, int n)
{
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cout<<"A["<<r<<"]["<<c<<"] is: ";
            cout<<A[r][c];
            cout<<endl<<endl;
        }
        
    }
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cout<<A[r][c]<<" ";
        }
        cout<<endl;
    }
}
void sum(int m, int n)
{
    int s=0;
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            s+=A[r][c];
        }
        
    }
    cout<<"Sum of elements of matrix: "<<s<<endl;
}
void row_sum(int m, int n)
{
    int r_s=0;
    for (int  r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            r_s= r_s+A[r][c];
        }
        cout<<"Sum of Rows "<<r<<" is "<<r_s<<endl;
        r_s=0;
    }
    
}
void col_sum(int m, int n)
{
    for (int c = 0; c < n; c++)
    {
        int col_s=0;
        for (int r = 0; r < m; r++)
        {
            col_s+=A[c][r];
        }
        cout<<"Sum of Columns "<<c<<" is "<<col_s<<endl;
        col_s=0;
    }
    
}
