// wap to check a number is prime or composite 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0){
        flag=false;// that number is composite
        break;
        }
    
    }
    if(flag==true)
    {
        cout<<"prime number";
    }
    else{
        cout<<"composite number";
    }

return 0;
    
}
