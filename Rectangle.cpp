#include <iostream>
using namespace std;

/**
 * @brief A class representing a Rectangle with length and breadth
 */
class Rectangle 
{
private :

int length ;
int breadth;

public :

/**
 * @brief Default constructor
 * Initializes length and breadth to 0
 */
Rectangle()
{
    length = 0;
    breadth = 0;
}

/**
 * @brief Parameterized constructor
 * @param l The length of the rectangle
 * @param b The breadth of the rectangle
 */
Rectangle( int l, int b)
{
    length = l;
    breadth = b;

}

/**
 * @brief Calculates the area of the rectangle
 * @return The area (length * breadth)
 */
int area()
{
    return length * breadth ;

}

/**
 * @brief Calculates the perimeter of the rectangle
 * @return The perimeter (2 * (length + breadth))
 */
int perimeter()
{
    return 2*(length+breadth);
}

/**
 * @brief Sets the length of the rectangle
 * @param l The new length value
 */
void setLength(int l)
{
    length = l;

}

/**
 * @brief Sets the breadth of the rectangle
 * @param b The new breadth value
 */
void setBreadth(int b)
{
    breadth = b;

}

/**
 * @brief Gets the length of the rectangle
 * @return The current length
 */
int getLength()
{
    return length;
}

/**
 * @brief Gets the breadth of the rectangle
 * @return The current breadth
 */
int getBreadth()
{
    return breadth;
}


};

/**
 * @brief Main function to demonstrate Rectangle class usage
 * @return 0 on successful execution
 */
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