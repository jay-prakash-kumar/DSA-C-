//wap to print factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int product=1;
    while(n>0)
    {
        product=product*n;
        n--;

    }
    cout<<product;

}
