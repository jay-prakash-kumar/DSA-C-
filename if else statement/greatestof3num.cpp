#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the fisrt number: ";
    cin>>a;
    int b;
    cout<<"enter the 2nd number: ";
    cin>>b;
    int c;
    cout<<"enter the 3rd number: ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest";
        }
        else
        {
            cout<<"c is greatest";
        }
    }
    else{
        if(b>c)
        {
            cout<<"b is greatest ";
        }
        else{
            cout<<"c is greatest: ";
        }
    }
    return 0;
}