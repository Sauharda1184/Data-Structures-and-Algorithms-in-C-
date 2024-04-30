#include <iostream>

using namespace std;
 
 /*Using templates in C++ for Generic Classes*/
template <class T>

/* A function to print*/
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    /*Using for loop for iteration*/
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
 /*A function that is used to swap the elements*/
void swap(int* x, int* y){
    int temp = *x;/*temp is stored in pointer variable x*/
    *x = *y;
    *y = temp;
}
 
 /*Bubble Sort function that implements bubble sort technique*/
void BubbleSort(int A[], int n){
    int flag = 0;
    /*Using for loop for iterative process*/
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (A[j] > A[j+1]){
                swap(&A[j], &A[j+1]);
                flag = 1;
            }
        }
        if (flag == 0){
            return;
        }
    }
}
 
 /*into the main function*/
int main() {
 /*An array of 10 elements is created */
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int n = sizeof(A)/sizeof(A[0]);
    Print(A, n, "\t\tA");
 
    BubbleSort(A, n);
    Print(A, n, " Sorted A");
 
    return 0;
}