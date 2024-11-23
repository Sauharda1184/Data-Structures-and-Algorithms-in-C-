/**
 * @file bubbleSort.cpp
 * @author Sauharda Meher Shrestha(sauhardameher@gmail.com)
 * @brief This file demonstrates the use of Bubble Sort Algorithm
 * @version 0.1
 * @date 2024-11-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;
 
 /**
  * @brief Template function to print array elements
  * @tparam T Template parameter for generic array type
  * @param vec Reference to the array to be printed
  * @param n Size of the array
  * @param s String message to display before printing array
  */
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
 
 /**
  * @brief Swaps two integer values using pointers
  * @param x Pointer to first integer
  * @param y Pointer to second integer
  */
void swap(int* x, int* y){
    int temp = *x;/*temp is stored in pointer variable x*/
    *x = *y;
    *y = temp;
}
 
 /**
  * @brief Implements the Bubble Sort algorithm to sort an integer array
  * @details Uses an optimized version with a flag to detect if array is already sorted
  * @param A Array to be sorted
  * @param n Size of the array
  */
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
 
 /**
  * @brief Main function to demonstrate Bubble Sort implementation
  * @return Returns 0 on successful execution
  */
int main() {
 /*An array of 10 elements is created */
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int n = sizeof(A)/sizeof(A[0]);
    Print(A, n, "\t\tA");
 
    BubbleSort(A, n);
    Print(A, n, " Sorted A");
 
    return 0;
}