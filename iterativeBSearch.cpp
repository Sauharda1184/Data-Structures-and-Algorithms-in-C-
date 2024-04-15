#include <iostream>
using namespace std;


class Array
{
    
public :
    
int A[10];
int size;
int length;

    
};


void Display(Array arr)
{
    
int i;
cout<< "Elements are :"<<endl;

for(i=0;i<arr.length;i++)
cout<<" "<<arr.A[i]<<endl;
}


void swap(int *x,int *y)
{
    
int temp=*x;
*x=*y;
*y=temp;

}

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


int main()
{

Array arr1={{2,3,9,16,18,21,28,32,35},10,9};

cout<<BinarySearch(arr1,16)<<endl;

Display(arr1);

return 0;

    
}