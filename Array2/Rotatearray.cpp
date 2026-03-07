// Ques : Rotate the given array 'a' by k steps, where k is non-negative. Note : k can be greater than n as well where n is the size of array 'a'.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
  for(int i=0;i<=v.size()-1;i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
void reversepart(int i,int j,vector<int>&v)
{
  while(i<=j){
    int temp;
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
  }
}
// void reversePart(int i,int j,vector<int>&v)
// {
//   while(i<=j)
//   {
//     int temp;
//     temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//   }
// }
// void reverse(vector<int>&v)
// {
//   int i=0;
//   int j=v.size()-1;
//   while(i<=j)
//   {
//     int temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//   }
// }
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    display(v);
    int k=2;
    if(k>v.size())
    {
        k=k%v.size();
    }
    reversepart(0,v.size()-k-1,v);
    display(v);
    reversepart(v.size()-k,v.size()-1,v);
    display(v);
    reversepart(0,v.size()-1,v);
    display(v);
}