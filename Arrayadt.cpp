#include <iostream>
using namespace std;
 
 
 // A c++ class named Array
class Array{
 
 
 //private access specifier
private:

    int* A; //dynamic memory allocation of an array in heap
    int size;//size of an Array
    int length;//length of an Array
 
 
 //public access specifier for member functions
 
public:
 //default constructor
    Array(int size){
        this->size = size;
        A = new int [size];
    }
 
    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }
 
    void display(){
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }
 
    ~Array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main() {
 
 
    Array arr(10);
    arr.create();
    arr.display();
 
 
    return 0;
}