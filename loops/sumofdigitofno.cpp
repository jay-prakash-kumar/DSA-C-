// wap to print sum of digit osf a number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int sum=0;
    int b;
    while(n>0){
    
    b=n%10;
    sum=sum+b;
    n=n/10;
    }
    cout<<sum;

}
