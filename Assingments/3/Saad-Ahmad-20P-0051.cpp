#include <iostream>
#include <string> 
#include <sstream> 

using namespace std; 

string int_to_string(int v) 
{ 
    stringstream ss;
    ss << v;
    return ss.str();
}

class Address
{
    public:
    int house_no;
    int street;
    string city,country;
    string get_full_address();
}; 

string Address::get_full_address()
    {
        string str="";
        str+="House No. ";
        str+=int_to_string(house_no);
        str+=", Street ";
        str+=int_to_string(street);
        str+=", ";
        str+=city;
        str+=", ";
        str+=country;
        return str;
    }

class Employee
{
    public:
    string name;
    Address current_address , permanent_address;

    void set_current_address(int house_no, int street, string city, string country)
    {
        current_address.house_no = house_no;
        current_address.street = street;
        current_address.city = city;
        current_address.country = country;
    }

    void set_permanent_address(int house_no, int street, string city, string country)
    {
        permanent_address.house_no = house_no;
        permanent_address.street = street;
        permanent_address.city = city;
        permanent_address.country = country;
    }

    void print_addresses()
    {
        cout<<"Current Address: "<<endl;
        cout<<current_address.get_full_address()<<endl;
        cout<<"Permanent Address: "<<endl;
        cout<<permanent_address.get_full_address()<<endl;
    }
};



class Wheel
{
    private:
    string a;

    public:
    //constructor
    Wheel()
    {

    }
    //function to set wheels
    void set_wheel_state(string s)
    {
        a = s;
    }
    //function to get wheel state
    string get_wheel_state()
    {
        return a;
    }

};

class Car
{
    Wheel arr[4];

    public:
    //constructor
    Car()
    {

    }

    void set_car_to_moving()
    {
        string e = "Turning";
        for (int i = 0; i < 4; i++)
        {
            arr[i].set_wheel_state(e);
        }
        
    }

    void set_car_to_stopped()
    {
        string e = "Stopped";
        for (int j = 0; j < 4; j++)
        {
            arr[j].set_wheel_state(e);
        }
        
    }

    void print_car_wheels_state()
    {
        cout<<"Car state:"<<endl;

        for (int i = 0; i < 4; i++)
        {
            string a = arr[i].get_wheel_state();
            cout<<"-Wheel "<<i<<" is "<<a<<endl;
        }
        
    }

};


int main() { 

    // Start of PART - 1  -----------------------
    Address a; 

    a.house_no = 4; 
    a.street = 25; 
    a.city = "Peshawar"; 
    a.country = "Pakistan";
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout << a.get_full_address() << endl;

    // End of Part - 1    -----------------------

    cout<<"--------------------------------------------------------------------------------"<<endl;


    // Start of PART - 2  -----------------------

    Employee e1; 

    e1.set_current_address(4, 25, "Peshawar", "Pakistan"); 
    e1.set_permanent_address(14, 9, "Lahore", "Pakistan"); 
    e1.print_addresses();  

    // End of Part - 2     -----------------------

    cout<<"--------------------------------------------------------------------------------"<<endl;


    // Start of PART - 3   -----------------------

    Wheel w1; 

    cout<<endl;
    w1.set_wheel_state("Turning"); 
    cout << w1.get_wheel_state() << endl; 

    // End of Part - 3     -----------------------
    cout<<endl;
    

    // Start of PART - 4   -----------------------

    Car c; 
    
    c.set_car_to_moving(); 
    c.print_car_wheels_state(); 

    c.set_car_to_stopped(); 
    c.print_car_wheels_state();

    // End of Part - 4     -----------------------


    return 0; 
}