// wap to check that no is 3 digit or not 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     if(n>99&&n<1000)
//     {
//         cout<<"three digit number";

//     }
//     else{
//         cout<<"not a three digit number";
//     }
// }


// Take a positive integer input and tell if it is divisible by 5 and 3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     if(n%5==0&&n%3==0) // logical and operator 
//     {
//         cout<<"divisible by 5 and 3";
//     }
//     else{
//         cout<<"not divisible by 5 and 3";
//     }
// }

// take 3 positive integers input and print the greatest of them
 
#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter the 1st number";
   cin>>a;
   int b;
   cout<<"enter the 2nd number";
   cin>>b;
   int c;
   cout<<"enter the 3rd number";
   cin>>c;
   if(a>b&&a>c)
   {
    cout<<"a is greatest";
   }
   else if(b>a&&b>c)
   {
    cout<<"b is greaest";
   }
   else {
    cout<<"c is greatest";
   }
}


