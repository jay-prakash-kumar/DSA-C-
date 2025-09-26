// typecasting 

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch='A';
//     cout<<int(ch);
// 
//}

// wap to print the position A IS FROM 1 TO Z  that is 26

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cin>>ch;
//     cout<<(int)ch-64;

// }

// Take integer as input and print half of the  number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     float y=(float)x;// typecasting the integer valure into float to give exactly half value
//     cout<<y/2;

// }

//Take  float input and print the fractional part of the real number
 
#include<iostream>
using namespace std;
int main()
{
    float x;
    cin>>x;
    int y=(int)x;// here typecast the float value into integer
    cout<<x-y;
}