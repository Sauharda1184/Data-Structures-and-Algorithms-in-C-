#include <iostream>
using namespace std;

class Rectangle 
{
private :

int length ;
int breadth;

public :

Rectangle()
{
    length = 0;
    breadth = 0;
}

Rectangle( int l, int b)
{
    length = l;
    breadth = b;

}

int area()
{
    return length * breadth ;

}

int perimeter()
{
    return 2*(length+breadth);
}

void setLength(int l)
{
    length = l;

}

void setBreadth(int b)
{
    breadth = b;

}

int getLength()
{
    return length;
}

int getBreadth()
{
    return breadth;
}


};

int main()
{
    Rectangle r1;
    Rectangle r2;
    r1.setLength(20);
    r1.setBreadth(30);
    cout<< " The length of the first rectangle : "<<r1.getLength()<<endl;
    cout<< " breadth of the first rectangle : "<<r1.getBreadth()<<endl;
    cout<< " The total Area of the given Rectangle : "<<r1.area()<<endl;
    return 0;
}