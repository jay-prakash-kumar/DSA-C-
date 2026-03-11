// //pascal Triangle(not optimised)
// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     int fact=1;
//     for(int i=2;i<=n;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int combination(int n,int r)
// {
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<combination(i,j);
            
//         }
//         cout<<endl;
        
//     }
// }
// pascal triangle 

// #include<iostream>
// using namespace std;
//  int fact(int n)
//     {
//         int fact=1;
//         for(int i=2;i<=n;i++)
//         {
//             fact=fact*i;
//         }
//         return fact;
//     }
//     int combination(int n,int r)
//     {
//         int ncr=fact(n)/(fact(r)*fact(n-r));
//         return ncr;
//     }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {  
//          for(int j=0;j<=i;j++)
//          {
//              int ncr;
//                ncr=combination(i,j);
//                cout<<ncr;
//          }
// //          cout<<endl;
         
// //     }

// // }
// //  another method (current logic)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//     int current =1;

//     for(int j=0;j<=i;j++)
//     {
//         cout<<current;
//         current=current*(i-j)/(j+1);
        
//     }
//     cout<<endl;
// }

// }