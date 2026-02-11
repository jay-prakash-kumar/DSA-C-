// // write a function to find out  the first and last digit of a number without returning anything
// #include<iostream>
// using namespace std;
// void find(int n,int* ptr1,int *ptr2)
// {
//     *ptr2=n%10;
//     while(n>9)
//     {
//         n=n/10;

//     }
//     *ptr1=n;
//     return;

// }
// int main()
// {
//     int n;
//     cin>>n;
//     int firstdigit,lastdigit;
//     int *ptr1=&firstdigit;
//     int *ptr2=&lastdigit;
//     find(n,ptr1,ptr2);
//     cout<<firstdigit<<" "<<lastdigit;

// }

//alias method 
// #include<iostream>
// using namespace std;
// void find(int n,int &firstdigit,int &lastdigit)
// {
//     lastdigit=n%10;
//     while(n>9)
//     {
//         n=n/10;
//     }
//     firstdigit=n;
//     return;

// }
// int main(){
//     int n;
//     cin>>n;
//     int firstdigit;
//     int lastdigit;
//     find(n,firstdigit,lastdigit);
//     cout<<firstdigit<<" "<<lastdigit;
// }

// by using pointer now 
//  #include<iostream>
//  using namespace std;
//  void find(int n,int *ptr1,int *ptr2)
//  {
//      *ptr2=n%10;
//      while(n>9)
//      {
//         n=n/10;
//      }
//      *ptr1=n;
//      return;
//  }
//  int main()
//  {
//     int n;
//     cin>>n;
//     int firstdigit;
//     int lastdigit;
//     int *ptr1=&firstdigit;
//     int *ptr2=&lastdigit;
//     find(n,ptr1,ptr2);
//     cout<<firstdigit<<" "<<lastdigit;

//  }