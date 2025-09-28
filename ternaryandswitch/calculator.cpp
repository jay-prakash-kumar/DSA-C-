//calculator by using if else 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     char op;
//     cout<<"enter the problem: ";
//     cin>>a>>op>>b;
//     if(op=='+')cout<<a+b;
//      if(op=='-')cout<<a-b;
//      if(op=='*')cout<<a*b;
//     if(op=='/')cout<<a/b;
// }

// calculator by using switch case statement

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout<<"enter the problem";
    cin>>a>>ch>>b;
    switch(ch){
        case '+':
        cout<<a+b;
        break;
        case '-' :
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
    }

    
}


