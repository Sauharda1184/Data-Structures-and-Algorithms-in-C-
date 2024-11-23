/**
 * Example of Inheritance and Dynamic Binding in C++
 */

#include <iostream>
using namespace std;

/**
 * Base class representing a basic SMS functionality
 */
class SMS 
{
    public:
    /**
     * Calls the print function to display message
     */
    void callFunction()
    {
        return print();
    }
    
    /**
     * Prints the contents of base SMS class
     */
    void print()
    { 
        cout<< " The contents of SMS !"<<endl;
    }
};

/**
 * Derived class that inherits from SMS and overrides print functionality
 */
class SMS2 : public SMS 
{
    public:
    /**
     * Overridden print function to display SMS2 specific message
     */
    void print()
    {
        cout << " The contents of SMS2 ! "<<endl;
    }
};

/**
 * Main function demonstrating dynamic binding with SMS classes
 * @return 0 on successful execution
 */
int main()
{
    SMS *geeks = new SMS();
    geeks -> callFunction();
    
    SMS *geeks2 = new SMS2();
    geeks2 -> callFunction();
    
    delete geeks;
    delete geeks2;
    
    return 0;
    
    
}


