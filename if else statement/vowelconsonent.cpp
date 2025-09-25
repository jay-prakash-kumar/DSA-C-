//  wap to check wheather the given alphabet is vowel or consonent
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    int y=(int)ch;
    if((y>=65&&y<=90)||(y>=97&&y<=122))
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            cout<<"character is vowel";
        }
        else{
            cout<<"character is consonent ";
        }
    }
    else{
        cout<<"character is not albhabet";
    }
}