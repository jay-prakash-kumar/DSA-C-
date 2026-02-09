//swap two number by passing address(pass by refernce)
#include<iostream>
using namespace std;
void swap(int &a,int &b)//pass by reference
{
    int temp=a;
    a=b;
    b=temp;
    return;
    
}
int main()
{
    int a=5;
    int b=6;
    // swap(&a,&b);
   
    swap(a,b);
    cout<<a<<" "<<b;
    


}