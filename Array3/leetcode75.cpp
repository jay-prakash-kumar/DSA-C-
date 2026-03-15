// sort 0 and 1 and 2 in a given array
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v)
{
    int noz=0;
    int noo=0;
    int nott=0;
    for(int i=0;i<v.size();i++)
    {
         if(v[i]==0)noz+=1;
         if(v[i]==1)noo+=1;
         if(v[i]==2)nott+=1;
    }
    for(int i=0;i<v.size();i++)
    {
        if(i<noz)
        {
            v[i]=0;
        }
        else if(i<noz+noo)
        {
            v[i]=1;
        }
        else{
            v[i]=2;
        }
    }
}
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    sort(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}