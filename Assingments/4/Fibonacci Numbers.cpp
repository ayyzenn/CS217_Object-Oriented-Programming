#include <iostream>
#include <stdlib.h> 
using namespace std;


//////// START OF MARKER FOR fib
// Making a fibonacci series and then getting number with the help of index
long fib(int index) 
{
    long number1 = 0; 
    long number2 = 1;
    long next_number = 0;
    if (index < 2)
    {
        return index;
    }
    else 
    {
        for (int i = 0 ; i < index ; i += 1) 
        {
            next_number = number1 + number2;
            number1 = number2;
            number2 = next_number;
        }
        return number1;
    }
               
}    
//////// END OF MARKER 



//////// DO NOT MODIFY CODE BEYOND THIS LINE

int main() //int argc, char* argv[] 
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout << (fib(num)) <<endl;      //atoi(argv[1])
    return 0;
}