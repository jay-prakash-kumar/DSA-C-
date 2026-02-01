// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     int f=1;
//     for(int i=2;i<=n;i++)
//     {
//         f*=i;
//     }
//     return f;
// }
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     int r;
//     cout<<"enter the value of r: ";
//     cin>>r;
//     int nfact=fact(n);
//     int rfact=fact(r);
//     int nrfact=fact(n-r);
//     int ncr=nfact/(rfact*nrfact);
//     cout<<ncr;
// }

// or
#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=2;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int combination(int n,int r)
{
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n,int r)
{
    int npr=fact(n)/(fact(n-r));
    return npr;
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int r;
    cout<<"enter the value of r: ";
    cin>>r;
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<ncr<<endl;
    cout<<npr;
}