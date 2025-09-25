// wap to check wheather a character is alphabet or not

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    int y=(int)ch;
    if(y>=65&&y<=90)
    cout<<"character is uppercase albhabet";
   else if(y>=97&&y<=122)
    cout<<"character is lowercase albhabet";
    else{
        cout<<"not an albhabet";
    }
    

}