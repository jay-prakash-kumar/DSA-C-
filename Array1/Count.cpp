//find how many element in an array is greter than a given no
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>key)
        {
            count++;
        }
    }
    cout<<count;

}