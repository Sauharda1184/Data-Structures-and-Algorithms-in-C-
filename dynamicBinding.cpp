/* Example of Inheritance and Dynamic Binding in C++ */

#include <iostream>
using namespace std;

class SMS 
{
    public :
    
    
    void callFunction()
    {
        return print();
    }
    
    void print()
    { 
        cout<< " The contents of SMS !"<<endl;
        
    }
    
};

class SMS2 : public SMS 
{
    public :
    
    void print()
    {
        cout << " The contents of SMS2 ! "<<endl;
    }
    
    
};

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


