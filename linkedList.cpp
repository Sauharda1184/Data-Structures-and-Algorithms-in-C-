#include <iostream>

using namespace std;

class Node 
{
    // @post : public access specifier
    public :
    
    //data of a node
    int data;

    //pointer to next node
    Node *next;
};

//into the main function
int main()
{
    // an array of 5 elements
    int A[]= { 3, 5, 7, 8, 10};


    //pointer to head of node
    Node* head = new Node; //memory allocation in heap

// pointer to temporary node
    Node* temp;
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


    Node* p = head;

    while( p != nullptr)
    {
        cout<< p -> data << " " <<flush;
        p = p -> next;

    }

    return 0;


}