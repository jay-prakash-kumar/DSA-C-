#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter the n: ";
    cin>>n;
    int r;
    cout<<"enter r: ";
    cin>>r;
    int nfact=1;
    
    for(int i=2;i<=n;i++)
    {
         nfact*=i;
    }
    
     int rfact=1;
    for(int j=2;j<=r;j++)
    {
        rfact*=j;
    }
    
    int nrfact=1;//nr fact->(n-r)!
    
    for(int k=2;k<=(n-r);k++)
    {
        nrfact*=k;
    }
 int ncr=nfact/(rfact*nrfact);
 cout<<ncr;

    
}