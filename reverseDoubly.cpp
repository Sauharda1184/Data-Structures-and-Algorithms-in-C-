#include <iostream>
#include <cmath>
#include <stack>

using namespace std;
 
/**
 * Node class represents a single node in a linked list
 */
class Node{
public:
    int data;
    Node* next;
};
 
Node* head = new Node;
 
/**
 * Creates a singly linked list from an array
 * @param A Array containing elements to create the linked list
 * @param n Size of the array
 */
void create(int A[], int n){
    Node* temp;
    Node* tail;
 
    head->data = A[0];
    head->next = nullptr;
    tail = head;
 
    for (int i=1; i<n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        tail->next = temp;
        tail = temp;
    }
}
 
/**
 * Finds the middle node using length calculation method
 * Time Complexity: O(n)
 * @param p Pointer to the head of the linked list
 */
void middleNode1(Node* p){
    int length = 0;
    while (p){
        length++;
        p = p->next;
    }
 
    int index = (int)ceil(length/2.0);
    Node* q = head;
    for (int i=0; i<index-1; i++){
        q = q->next;
    }
    cout << "Middle Element (Method-I): " << q->data << endl;
}
 
/**
 * Finds the middle node using two-pointer technique
 * Time Complexity: O(n)
 * @param p Pointer to the head of the linked list
 */
void middleNode2(Node* p){
    Node* q = p;
    while (q){
        q = q->next;
        if (q){
            q = q->next;
        }
        if (q){
            p = p->next;
        }
    }
    cout << "Middle Element (Method-II): " << p->data << endl;
}
 
/**
 * Finds the middle node using stack method
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * @param p Pointer to the head of the linked list
 */
void middleNode3(Node* p){
    stack<Node*> s;
    while (p){
        s.push(p);
        p = p->next;
    }
    int length = s.size();
    int popLength = (int)(floor(length/2.0));
    while (popLength){
        s.pop();
        popLength--;
    }
    cout << "Middle Element (Method-III): " << s.top()->data << endl;
}
 
/**
 * Main function to demonstrate middle node finding algorithms
 * @return 0 on successful execution
 */
int main() {
 
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    create(A, sizeof(A)/sizeof(A[0]));
 
    cout << endl;
    middleNode1(head);
    middleNode2(head);
    middleNode3(head);
 
    return 0;
}