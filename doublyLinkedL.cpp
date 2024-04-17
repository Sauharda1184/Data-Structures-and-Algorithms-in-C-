#include <cstdlib>
#include <iostream>

using namespace std;

/*A Node for Doubly LinkedList*/
class Node
{
    /*Public Access Specifier*/
    public :
    
    int data;/*data*/
    
    Node* prev;/*pointer to previous Node*/
    Node* next;/*Pointer to Next Node*/
    
}*first = NULL;/*First Node is Initialized to zero*/

/*A Function that Creates Doubly Linked List*/
/* Takes An Array and N integers as an input*/
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

void display( Node *p )
{
    while(p)
    {
        cout<<p->data<<endl;
        p= p->next;
        
    }
    cout<<" "<<endl;
    
}

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

/*Into the main Function*/
int main()
{
    int A[]= {10,20,30,40,50};
    create(A,5);
    
    cout<<"The length of the Doubly LinkedList is : "<<Length(first)<<endl;
    
    display(first);
    
    return 0;
    
    
}
