// reverse part of array 
#include <iostream>
using namespace std;

void reversePart(int arr[], int l, int r)
{
    for(int i=l, j=r; i<j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6;

    reversePart(arr,1,4);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}