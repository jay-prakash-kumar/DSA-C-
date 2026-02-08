//sum of two number using pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=3;
//     int *p=&x;
//     int y=6;
//     int *p1=&y;
//     cout<<*p1+*p;
// }

//taking input of pointer
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the first no";
    int *p1=&x;
    cin>>*p1;
    int y;
    int *p2=&y;
    cout<<"enter the 2nd no ";
    cin>>*p2;
    cout<<x+y;


}