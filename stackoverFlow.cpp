/**
 * @file stackOverFlow.cpp
 * @brief Implementation of a Stack data structure using arrays
 * 
 * This program demonstrates a basic Stack implementation with the following features:
 * - Push and Pop operations
 * - Peek operation to view elements at specific positions
 * - Stack overflow and underflow handling
 * - Display functionality
 * - Stack status checking (empty/full)
 */

#include <iostream>
using namespace std;
 
/**
 * @class Stack
 * @brief A class that implements a Stack using an array
 * 
 * This class provides a basic implementation of a Stack data structure
 * with fixed size using an array. It supports standard stack operations
 * like push, pop, peek, and various utility methods.
 */
class Stack {
private:
    int size;    ///< Maximum size of the stack
    int top;     ///< Index of the top element
    int* S;      ///< Pointer to the array storing stack elements
public:
    Stack(int size);
    ~Stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isFull();
    int isEmpty();
    void display();
    int stackTop();
};
 
/**
 * @brief Constructor for Stack class
 * @param size The maximum size of the stack
 */
Stack::Stack(int size) {
    this->size = size;
    top = -1;
    S = new int[size];
}
 
/**
 * @brief Destructor for Stack class
 * Deallocates the dynamically allocated array
 */
Stack::~Stack() {
    delete[] S;
}
 
/**
 * @brief Pushes an element onto the stack
 * @param x The element to be pushed
 * @throws Prints "Stack Overflow!" if the stack is full
 */
void Stack::push(int x) {
    if (isFull()){
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        S[top] = x;
    }
}
 
/**
 * @brief Removes and returns the top element from the stack
 * @return The popped element
 * @return 1 if the stack is empty
 * @throws Prints "Stack Underflow!" if the stack is empty
 */
int Stack::pop() {
    int x = 1;
    if (isEmpty()){
        cout << "Stack Underflow!" << endl;
    } else {
        x = S[top];
        top--;
    }
    return x;
}
 
/**
 * @brief Peeks at an element at a specific position from the top
 * @param index The position from top (0-based)
 * @return The element at the specified position
 * @return -1 if the position is invalid
 * @throws Prints "Invalid position!" if the index is out of bounds
 */
int Stack::peek(int index) {
    int x = -1;
    if (top-index+1 < 0 || top-index+1 == size){
        cout << "Invalid position!" << endl;
    } else {
        x = S[top-index+1];
    }
    return x;
}
 
/**
 * @brief Checks if the stack is full
 * @return 1 if stack is full, 0 otherwise
 */
int Stack::isFull() {
    if (top == size-1){
        return 1;
    }
    return 0;
}
 
/**
 * @brief Checks if the stack is empty
 * @return 1 if stack is empty, 0 otherwise
 */
int Stack::isEmpty() {
    if (top == -1){
        return 1;
    }
    return 0;
}
 
/**
 * @brief Displays all elements in the stack
 */
void Stack::display() {
    for (int i=top; i>=0; i--){
        cout << S[i] << " | " << flush;
    }
    cout << endl;
}
 
/**
 * @brief Returns the top element without removing it
 * @return The top element, or -1 if stack is empty
 */
int Stack::stackTop() {
    if (isEmpty()){
        return -1;
    }
    return S[top];
}
 
/**
 * @brief Main function to demonstrate stack operations
 * @return 0 on successful execution
 */
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk(sizeof(A)/sizeof(A[0]));
 
    // Populate stack with array elements
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.push(A[i]);
    }
    stk.push(11);
 
    cout << "Stack full: " << stk.isFull() << endl;
 
    // Display stack;
    cout << "Stack: " << flush;
    stk.display();
 
    // Peek
    cout << "Peek at 0th: " << stk.peek(0) << endl;
    cout << "Peek at 3rd: " << stk.peek(3) << endl;
    cout << "Peek at 10th: " << stk.peek(10) << endl;
 
    // Top element
    cout << "Top element: " << stk.stackTop() << endl;
 
    // Pop out elements from stack
    cout << "Popped out elements: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.pop() << ", " << flush;
    }
    cout << endl;
    stk.pop();
 
    cout << "Stack empty: " << stk.isEmpty() << endl;
 
    return 0;
}
