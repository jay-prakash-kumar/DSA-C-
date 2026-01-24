//wap to print reverse of a given number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int lastdigit;
    while(n>0)
    {
        lastdigit=n%10;
        cout<<lastdigit;
        n=n/10;
    }


}