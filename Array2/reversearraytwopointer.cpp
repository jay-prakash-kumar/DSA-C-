// // // reversing array or vector in single array no taking extra array
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int main()
// // {
// //     vector<int>v;
// //     int n;
// //     cout<<"enter the no of element of array";
// //     cin>>n;
// //     for(int i=0;i<n;i++)
// //     {
// //         int p;
// //         cin>>p;
// //         v.push_back(p);
        
// //     }
    
// //     for(int i =0;i<n/2;i++)
// //     {
// //        swap(v[i],v[n-1-i]);
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         cout<<v[i]<<" ";
// //     }
// // }

// // reverse whole part of array using temp variable and in single array by using while loop 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
     for(int i=0;i<a.size();i++)
     {
        cout<<a[i]<<" ";
     }
     cout<<endl;
}
// void reversepart(int i,int j,vector<int> &v)
//     {
//         while(i<=j)
//         {
//             int temp;
//             temp=v[i];
//             v[i]=v[j];
//             v[j]=temp;
//             i++;
//             j--;
//         }
//     }
void reverse(vector<int>&v)
{
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }
}

int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(4);
    // int i=0;
    // int j=v.size()-1;
    display(v);
    
    // while(i<j)
    // {
    //     int temp=v[i];
    //      v[i]=v[j];
    //      v[j]=temp;
    //      i++;
    //      j--;

    // }
    // reverse(v.begin(),v.end());
    // reversepart(2,4,v);
    reverse(v);
    display(v);


}