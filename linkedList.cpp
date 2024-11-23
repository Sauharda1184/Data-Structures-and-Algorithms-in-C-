/**
 * @file linkedList.cpp
 * @author Sauharda (sauhardameher@gmail.com)
 * @brief This file demonstrates the use of LinkedList
 * @version 0.1
 * @date 2024-11-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;

/**
 * @class Node
 * @brief Represents a node in a singly linked list
 */
class Node 
{
    // @post : public access specifier
    public :
    
    //data of a node
    int data;

    //pointer to next node
    Node *next;
};

/**
 * @brief Main function to demonstrate linked list creation and traversal
 * @return 0 on successful execution
 */
int main()
{
    /** @brief Initialize array with 5 elements */
    int A[]= { 3, 5, 7, 8, 10};

    /** @brief Pointer to head node of the linked list */
    Node* head = new Node; //memory allocation in heap

// pointer to temporary node
    Node* temp;
    /** @brief Pointer to track the last node in the list */
    Node* last; //pointer to last node

//head = first element that is 3
    head -> data = A[0];

    // head moves to next 
    head -> next = nullptr;

    last = head;

    //Create a linkedList

//for traversing through the linked list and printing its elements 
    for( int i = 0; i<sizeof(A); i++)//where size of A is 5 
    
    {
        //create a temporary Node 

        temp = new Node;//memory allocation in heap or dynamic memory allocation

        //populate temporary Node


        temp -> data = A[i];//where i is from 0 to 4 
        temp -> next = nullptr;

        //last's next is pointing to temp

        last -> next = temp;
        last = temp;


    }

    /**
     * @brief Traverse and print the linked list
     * @note Prints each node's data with space separator
     */
    Node* p = head;

    while( p != nullptr)
    {
        cout<< p -> data << " " <<flush;
        p = p -> next;

    }

    return 0;


}