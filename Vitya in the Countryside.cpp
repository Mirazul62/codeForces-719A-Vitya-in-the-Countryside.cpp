#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,res;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];

    res=n-1;

    if(n>=3)
    {
        if(a[res]<a[n] && a[n]!=15)
            cout<<"UP";
        else if(a[res]<a[n] && a[n]==15)
            cout<<"DOWN";
        else if( a[res]>a[n] && a[n]!=0)
            cout<<"DOWN";
        else if( a[res]>a[n] && a[n]==0)
            cout<<"UP";

    }
    if(n==1)
    {
         if(a[1]==15)
            cout<<"DOWN";
        else if(a[1]==0)
            cout<<"UP";
        else if(a[1]!=15)
            cout<<"-1";
    }
    if(n==2)
    {
        if(a[1]<a[2] && a[2]!=15)
            cout<<"UP";
        else if(a[1]<a[2] && a[2]==15)
            cout<<"DOWN";
        else if (a[1]>a[2] && a[2]!=0)
            cout<<"DOWN";
        else if(a[1]>a[2] && a[2]==0)
            cout<<"UP";
    }




}
