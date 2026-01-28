// // rhombus flipped triangle 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=n;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// star pyramid

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// another method nst and nsp

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int nsp=n-1;
//     int nst=1;
//     for(int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=nsp;j++)
//         {
//             cout<<" ";
//         }
//         nsp--;
//         for(int k=1;k<=nst;k++)
//         {
//             cout<<"*";
//         }
//         nst+=2;
//         cout<<endl;

//     }
// }
// number pyramid palindrome

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//          for(int k=1;k<=i;k++)
//          {
//              cout<<k;
//          }
//          for(int q=i-1;q>=1;q--)
//          {
//             cout<<q;
//          }
//         cout<<endl;
//     }
// }

// diamond (n=4)
//       *
//     * * *
//   * * * * *
// * * * * * * * 
//   * * * * *
//     * * *
//       * 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nst=1;
    int nsp =n-1;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            cout<<" ";
        }
        if(i<=n-1)nsp--;
        else nsp++;

        for(int k=1;k<=nst;k++)
        {
            cout<<"*";
        }
        if(i<=n-1) nst+=2;
        else nst-=2;
        cout<<endl;
    }
}