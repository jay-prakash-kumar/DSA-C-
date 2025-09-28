// Ques : Write a program to input day number(1-7) in a week and print day of week name using switch case.

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the days no ";
    cin>>x;
    switch(x){
    case 1:
        cout<<"monday"<<endl;
        break;
    case 2:
        cout<<"tuesday"<<endl;
        break;

    case 3:
        cout<<"wednesday"<<endl;
        break;
    case 4:
        cout<<"thursday"<<endl;
        break;
    case 5:
        cout<<"friday"<<endl;
        break;
    case 6:
        cout<<"saturday"<<endl;
        break;
    case 7:
        cout<<"sunday";
        break;
    default:
    cout<<"invalid statement";
}
}
   
       
       
       
       
    
    
    
    
    
