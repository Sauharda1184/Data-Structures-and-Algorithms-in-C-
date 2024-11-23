#include <iostream>
using namespace std;

/**
 * @brief Class representing an array data structure
 */
class Array
{
    
public :
    
int A[10];     ///< The array of integers
int size;      ///< Maximum size of the array
int length;    ///< Current number of elements in the array

    
};

/**
 * @brief Displays all elements in the array
 * @param arr The array to display
 */
void Display(Array arr)
{
    
int i;
cout<< "Elements are :"<<endl;

for(i=0;i<arr.length;i++)
cout<<" "<<arr.A[i]<<endl;
}

/**
 * @brief Swaps two integer values
 * @param x Pointer to first integer
 * @param y Pointer to second integer
 */
void swap(int *x,int *y)
{
    
int temp=*x;
*x=*y;
*y=temp;

}

/**
 * @brief Performs binary search on a sorted array
 * @param arr The sorted array to search in
 * @param key The value to search for
 * @return Index of the key if found, -1 if not found
 */
int BinarySearch(Array arr,int key)
{
int l,mid,h;
l=0;
h=arr.length-1;
while(l<=h)
{
mid=(l+h)/2;
if(key==arr.A[mid])
return mid;
else if(key<arr.A[mid])
h=mid-1;
else
l=mid+1;
}
return -1;
}

/**
 * @brief Main function - entry point of the program
 * @return 0 on successful execution
 */
int main()
{

Array arr1={{2,3,9,16,18,21,28,32,35},10,9};

cout<<BinarySearch(arr1,16)<<endl;

Display(arr1);

return 0;

    
}