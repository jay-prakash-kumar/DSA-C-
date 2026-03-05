// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter target : ";
//     cin>>x;
//     vector<int>v;
//     int n;
//     cin>>n;
//     cout<<"Enter the array element : ";
//     for(int i=0;i<n;i++)
//     {
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<=v.size()-1;j++)
//         {
//             if(v[i]+v[j]==x)
//             {
//                 cout<<i<<j;
//             }
//         }
//     }
    


// }
// again practising same code

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int target;
    cin>>target;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i]+v[j]==target)
            {
                cout<<i<<j<<" ";
            }
        }
    }


}

