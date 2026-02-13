#include<iostream>
using namespace std;
int main()
{
    // int a=15;
    // int* ptr=&a;
    // int b=++(*ptr);// preincrement then assign value to b
    // cout<<a<<" "<<b;
    int a =16;
    int *ptr=&a;
    int b=(*ptr)++;
    cout<<a<<" "<<b;

}