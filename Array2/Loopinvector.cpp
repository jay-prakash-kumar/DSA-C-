// // Ques : Find the last occurrence of x in the array.
// // by giving size to vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     for(int i=n-1;i>=0;i--)
//     {
//         if(v[i]==x)
//         {
//             cout<<i;
//             break;
//         }
//     }
// }

// by not intoducing size to given vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(8);
//     int x=5;
//     int idx=-1;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]==x)
//         {
//             idx=i;
//         }
        
//     }
//     cout<<idx;


// }

// or
#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int n;
     cin>>n;// how many element in vector is inserted
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    int element;
    cin>>element;
    int idx=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==element)
        {
            idx=i;
        }
        
    }
    cout<<idx;
}