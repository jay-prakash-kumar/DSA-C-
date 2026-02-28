#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,5,2,1};
    int *ptr=arr;
    // cout<<ptr<<endl;
    //  cout<<&arr[0];
    // ptr[0]= 9;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // another method of printing element in array
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<" ";
    }
    *ptr=8;
    ptr++;
    *ptr =9;
    ptr--;// this is done to again reach the base address of ptr pointer  
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i];
    }
    ptr=arr;


}