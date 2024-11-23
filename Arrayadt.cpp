/**
 * @file Arrayadt.cpp
 * @brief Implementation of a dynamic Array data structure
 */

#include <iostream>
using namespace std;

/**
 * @class Array
 * @brief A class that implements dynamic array operations
 */
class Array {
private:
    int* A;     ///< Pointer to dynamic array in heap
    int size;   ///< Maximum size of the array
    int length; ///< Current number of elements in array

public:
    /**
     * @brief Constructor for Array class
     * @param size The maximum size of the array
     */
    Array(int size) {
        this->size = size;
        A = new int[size];
    }

    /**
     * @brief Creates an array by taking user input
     * @details Prompts user to enter length and elements of the array
     */
    void create() {
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }

    /**
     * @brief Displays all elements in the array
     */
    void display() {
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }

    /**
     * @brief Destructor to free allocated memory
     */
    ~Array() {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

/**
 * @brief Main function to demonstrate Array class functionality
 * @return 0 on successful execution
 */
int main() {
    Array arr(10);
    arr.create();
    arr.display();

    return 0;
}
