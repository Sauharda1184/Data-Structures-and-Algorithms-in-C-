#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * @brief Node class for Doubly Linked List implementation
 */
class Node
{
    /*Public Access Specifier*/
    public :
    
    int data;/*data*/
    
    Node* prev;/*pointer to previous Node*/
    Node* next;/*Pointer to Next Node*/
    
}*first = NULL;/*First Node is Initialized to zero*/

/**
 * @brief Creates a Doubly Linked List from an array
 * @param A Array containing elements to create list from
 * @param n Number of elements in the array
 */
void create(int A[], int n)
{
    /* A pointer of data type Node*/
    Node *t, *last;
    int i;
    
    /*First Node is Created */
    first = new Node;
    first-> data = A[0];/*First Node Points to the first element*/
    first->prev = first->next = NULL;/*First Node's prev and next points to NULL*/
    last = first;
    
    /* Using for loop for iteration*/
    for( i = 1 ; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last -> next;
        t->prev = last;
        last->next = t;
        last = t;
    }
    
    
}

/**
 * @brief Displays all elements in the Doubly Linked List
 * @param p Pointer to the first node of the list
 */
void display( Node *p )
{
    while(p)
    {
        cout<<p->data<<endl;
        p= p->next;
        
    }
    cout<<" "<<endl;
    
}

/**
 * @brief Calculates the length of the Doubly Linked List
 * @param p Pointer to the first node of the list
 * @return Integer length of the list
 */
int Length(Node *p)
{
    int len = 0;
    
    while(p)
    {
        len++;
        p= p->next;
        
    }
    return len;
}

/**
 * @brief Main function to demonstrate Doubly Linked List operations
 * @return Integer status code (0 for successful execution)
 */
int main()
{
    int A[]= {10,20,30,40,50};
    create(A,5);
    
    cout<<"The length of the Doubly LinkedList is : "<<Length(first)<<endl;
    
    display(first);
    
    return 0;
    
    
}
