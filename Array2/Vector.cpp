#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;// here the size of array is zero.
    v.push_back(5);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;


    v.push_back(7);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(8);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(9);
    // cout<<v.size()<<endl;
    v.capacity();
    // cout<<v[0];
    // cout<<v[1];
    // cout<<v[2];
    // cout<<v[3];
    


}
