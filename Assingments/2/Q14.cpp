#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

const int NUMROWS = 13;
const int NUMSEATS = 6;

void init(char[][NUMSEATS]);
void printPlane(char[][NUMSEATS]);
void getSeatNum(char[][NUMSEATS], int & , int & ); 
void checkSeat(char[][NUMSEATS], int , int );
char getSeatYN();

int main()
{
    int row = 0 ,col = 0;
    //bool goodseat;
    char choice;
    char plane[NUMROWS][NUMSEATS];
    init(plane);
    cout<<"Welcome to the Plane Seat Selection Program!"<<endl<<endl;
    printPlane(plane);
    choice = getSeatYN();
    while (choice != 'N')
    {
        getSeatNum(plane,row,col);
        checkSeat(plane, row, col);
        printPlane(plane);
        choice = getSeatYN();
    }
    return 0;
}
void checkSeat(char plane[][NUMSEATS], int row, int col)
{
    if (plane[row-1][col] != 'X')
    {
        plane[row-1][col] = 'X';
        cout<<"The seat is reseved for you."<<endl;
    }
    else
    {
        cout<<"Seat taken!"<<endl;
    }
}
void init(char plane[][NUMSEATS])
{
    for (int i = 0; i < NUMROWS; i++)
    {
        for (int j = 0; j < NUMSEATS; j++)
        {
            plane[i][j] = '*';
        }
    }
}
void getSeatNum(char[][NUMSEATS], int &row, int &col)
{
    char ticket;
    char seat; 
    int min, max;
    bool good = true;
    do
    {
        good=true;
        cout<<"Please Enter the type of Seat desired: "<<endl;
        cout<<"F = First class"<<endl;
        cout<<"B = Business class"<<endl;
        cout<<"E = Economy class"<<endl;
        cin>>ticket;
        ticket = toupper(ticket);
        switch (ticket)
        {
        case 'F':
            min = 1;
            max = 2;
            break;
        case 'B':
            min = 3;
            max = 7;
            break;
        case 'E':
            min = 8;
            max = 13;
            break;
        default:
            good = false;
            cout<<"Invalid seat type!"<<endl;  
            break;
        }
    } 
    while (!good);
    good = false;
    do
    {
        cout<<"Please enter in the desired Row Number ("<<min<<"-"<<max<<") : "<<endl;
        cin>>row;
    }
    while (row<min || row>max);

    do
    {
        cout<<"Please enter in the desired Seat (A-F): "<<endl;
        cin>>seat;

        col= tolower(seat)- 'a';
        if (col<0 || col>5)
        {
            cout<<"Invalid Seat"<<endl;
        }
        else if ((ticket == 'F') && ((row > 2) || (row<1)))
        {
            cout<<"Invalid Selection For First Class"<<endl;
        }
        else if ((ticket == 'B') && ((row <= 2) || (row > 7)))
        {
            cout<<"Invalid Selection For Business Class"<<endl;
        }
        else if ((ticket == 'E') && ((row < 8) || (row > 13)))
        {
            cout<<"Invalid Selection For Economy Class"<<endl;
        }
        else
        {
            good =true;
        }
    }
    while (!good);   
}
char getSeatYN()
{
    char choice;
    cout<<"Would you like to make a selection? (Y/N): ";
    cin>>choice;

    choice =static_cast<char>(toupper(choice));
    return choice;
}
void printPlane(char plane[][NUMSEATS])
{
    cout<<setw(11)<<"A"<<setw(5)<<"B"<<setw(5)<<"C"<<setw(5)<<"D"<<setw(5)<<"E"<<setw(5)<<"F"<<endl;
    cout<<" "<<endl;
    for (int i = 0; i < NUMROWS; i++)
    {
        cout<<"Rows"<<setw(2)<<i+1;
        for (int j = 0; j < NUMSEATS; j++)
        {
            cout<<setw(5)<<plane[i][j];
        }
        cout<<endl;
    }
    cout<<" "<<endl;
    cout<<"*-- Available seats"<<endl;
    cout<<"X-- Occupied seats"<<endl<<endl;
    cout<<"Row 1 and 2 are for First class passangers."<<endl;
    cout<<"Row 3 through 7 are for Business class passangers."<<endl;
    cout<<"Row 8 through 13 are for Economy class passangers."<<endl<<endl;
}