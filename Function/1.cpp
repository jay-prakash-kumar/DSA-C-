#include<iostream>
using namespace std;
// int startriangle(int n)
// {
    
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     startriangle(4);
// }

// pass by value 
// int triangle(int x)
// {   x=x+2;
//     return x;
// }

// int main()
// {
//     int a=10;
//     int b=triangle(a);// this is only taking copy of a and it does not chnage the valuer of a;
//     cout<<b;
    
// }
// pass by refernce 
int triangle(int &a)
{
        a=a+12;
        return a;
}

int main()
{
    int a=10;
    triangle(a);
    cout<<a;

}
