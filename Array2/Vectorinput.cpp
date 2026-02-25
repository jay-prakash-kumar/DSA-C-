// when size is present
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v(5);
//     for(int i=0;i<5;i++)
//     {
//         cin>>v[i];
//     }
    
//     for(int i=0;i<5;i++)
//     {
//         cout<<v[i]<<" "<<endl;
//     }
// }
// when size is  not present 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    { 
        int n;
        cin>>n;
        v.push_back(n);
    }
    for(int i=0;i<5;i++)
    {
        cout<<v[i];
    }

}