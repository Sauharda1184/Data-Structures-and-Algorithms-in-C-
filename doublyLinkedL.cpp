#include <cstdlib>
#include <iostream>

using namespace std;

class Node
{
    public :
    
    int data;
    
    Node* prev;
    Node* next;
    
}*first = NULL;

void create(int A[], int n)
{
    Node *t, *last;
    int i;
    
    first = new Node;
    first-> data = A[0];
    first->prev = first->next = NULL;
    last = first;
    
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


int main()
{
    int A[]= {10,20,30,40,50};
    create(A,5);
    
    cout<<"The length of the Doubly LinkedList is : "<<Length(first)<<endl;
    
    display(first);
    
    return 0;
    
    
}
