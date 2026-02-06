// #include<iostream>
// using namespace std;
// int main()
// {
//     // int n;
//     // int *p=&n; // int pointer 
//     // cout<<&n<<endl;
//     // cout<<p;

//     // float m=6.7;
//     // float* ptr=&m;
//     // cout<<ptr<<endl ;
//     // cout<<&m;

//    bool t=true;
//    bool *ptr=&t;
//    cout<<ptr<<endl<<&t;



//     // 0x61ff0c;
// }

//playing with pointer(derefernce operator) 
#include<iostream>
using namespace std;
int main()
{
    //  int x=122;
    //  int *p=&x;
    //  cout<<*p;// p me jo address store hai  wha  jakar jo value store hai usko print karo
    int x=122;
    int *p=&x;
    cout<<x<<endl;
    *p=6;
    cout<<x;
     

}