// copies the element in reverse array
#include<iostream>
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
int main()
{
    vector<int>v1;
    int n; 
    cout<<"enter the no of element: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v1.push_back(p);
    }
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);
    // v1.push_back(5);
    // v1.push_back(6);
    // display(v1);
    // now taking input from user 


    vector<int>v2(v1.size());
    for(int i=0;i<v2.size();i++)
    {
        int j=v1.size()-1-i;
        {
            v2[i]=v1[j];
        }
    }
     display(v2);
}
