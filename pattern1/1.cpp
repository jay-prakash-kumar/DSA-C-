// solid square
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter no of rows: ";
//     cin>>n;
//     int m;
//     cout<<"enter no of column";
//     cin>>m;
    
//     cin>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// print the pattern
// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter no of rows: ";
//     cin>>n;
//     int m;
//     cout<<"enter no of column";
//     cin>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


// print the given pattern(star triangle)

// *
// **
// ***
// ****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
//     int m;
//     cout<<"enter the number of column";
//    cin>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }


// }

// inverted star triangle 

// ****
// ***
// **
// *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
//     int m;
//     cout<<"enter the number of column";
//    cin>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n+1-i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// print the given pattern 

// 1
// 12
// 123
// 1234

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
//     int m;
//     cout<<"enter the number of column";
//    cin>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


// print the given pattern
// 1
// 1 3
// 1 3 5
// 1 3 5 7

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
//     int m;
//     cout<<"enter the number of column";
//    cin>>m;

//    for(int i=1;i<=n;i++)
//    {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<2*j-1;
        
//     }
//     cout<<endl;
//    }
// or
// int a=1;
// for (int i=1;i<=n;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<a;
//         a+=2;
//     }
// }

// }

//alphabet pattern 
// A B C D
// A B C D
// A B C D 
// A B C D 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;
    
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<(char)(j+64)<<" ";
            
//         }
//         cout<<endl;
//     }
// }

// Ques=> Star plus 
    //    *
    //    *
    //* * * * *
    //    *
    //    * 
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"enter the number"<<" ";
//     cin>>n;
//     int mid=n/2+1;
//     for(int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=n;j++)
//         {
//             if(i==mid||j==mid)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<"";
//             }
//         }
//         cout<<endl;
//     }
//  }

// print the given pattern 
// question- star cross 

// #include<iostream>
// using namespace std;
// int main()
// {   int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=n;j++)
//         {
//             if(i==j||i+j==n+1)
//             {
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// question :print the given pattern (floyds triangle)
//  1
//  2 3
//  4 5 6
//  7 8 9 10
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int k=1; // using extra varible and increase this in each round after print
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k<<" ";
//             k+=1;
//         }
//         cout<<endl;
//     }
// }
 
// question:print the given pattern (binary triangle)
// 1
// 0 1
// 1 0 1
// 0 1 0 1


      
// #include<iostream>
// using namespace std;
// int main()
// {   int n;
//     cin>>n;
//     int k=5;
//     for(int i=1;i<=n;i++)
//     {
//         if(i%2!=0) k=1;
//         else k=0;
        
//         for (int j=1;j<=i;j++)
//         {
//            cout<<k;

//            if(k==1) k=0;
//            else k=1;
//         }
//         cout<<endl;
//     }
// }


     //or 
// #include<iostream>
// using namespace std;
// int main()
// {   int n;
//     cin>>n;
//     int k=5;
//     for(int i=1;i<=n;i++)
//     {
       
//         for (int j=1;j<=i;j++)
//         {
//            if((i+j)%2==0) cout<<1;
//            else cout<<0;
//         }
//         cout<<endl;
//     }
// }

// flipped star triangle

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     { // spaces
//         for (int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         // stars
//         for (int k=1;k<=i;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// number triangle flipped
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++)
//         {
//             cout<<k;
//         }
//         cout<<endl;
//     }
//  }

//or

//flipped triangle 
// this method only work on certain question 
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {  
//              if(i+j>=n+1)
//             cout<<"*";
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
       
//     }
//  }