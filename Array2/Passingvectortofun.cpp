// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<int>a) // only send the value not pointing the reference 
// {
//     a[0]=100;
//     for(int i=0;i<a.size();i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {

//     vector<int>v;
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(8);
//     v.push_back(7);
//     change(v);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// if we want to change the value of orirginal vector then->
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&a)// a is pointing address of vector v so this case is pass by reference.
{
    a[1]=10;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(2);
    change(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";// in this orginianal vector is changed 
    }
    


}