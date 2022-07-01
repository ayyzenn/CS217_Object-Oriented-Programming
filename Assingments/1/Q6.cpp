#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number of rows: ";
    cin>>a;
    cout<<"Enter number of columns: ";
    cin>>b;
	int arr_a[a][b];
    int arr_b[a][b];
    int sum;
    cout<<"Enter elements for array "<<endl;
    for (int r = 0; r < a; r++)
    {
        for (int c = 0; c < b; c++)
        {
            cout<<"a["<<r<<"]"<<"["<<c<<"] = ";
            cin>>arr_a[r][c];
            cout<<"b["<<r<<"]"<<"["<<c<<"] = ";
            cin>>arr_b[r][c];
        }
        
    }
    cout<<endl<<"Values of Array a"<<endl<<endl;
    for (int r = 0; r < a; r++)
    {
        for (int c = 0; c < b; c++)
        {
            cout<<arr_a[r][c]<<"\t";
                
        }
        cout<<endl;
    }
    cout<<endl<<"Values of Array b"<<endl<<endl;
    for (int r = 0; r < a; r++)
    {
        for (int c = 0; c < b; c++)
        {
            cout<<arr_b[r][c]<<"\t";
                
        }
        cout<<endl;
    }
    cout<<endl<<"Values of Array c (Resultant array) after addition of Array a and b "<<endl<<endl;
    for (int r = 0; r < a; r++)
    {
        for (int c = 0; c < b; c++)
        {   
            sum=arr_a[r][c]+arr_b[r][c];
            cout<<sum<<"\t";     
        }
        cout<<endl;
    }

}