// 0 and 1 sort(method 1)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    int noz=0;
    int noo=1;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
            noz+=1;
        }
        else{
            noo+=1;
        }
    }
    
    for(int i=0;i<=(noz-1);i++)
    {
        cout<<"0";
    }
     for(int i=noz;i<=v.size()-1;i++)
    {
        cout<<"1";
    }
     

}