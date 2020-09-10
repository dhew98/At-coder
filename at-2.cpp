#include<iostream>
using namespace std;
main()
{
    int n,m,x,sum=0,r;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        sum+=x;
    }
    r=n-sum;
    if(r>0)
    {
        cout<<r<<endl;
    }
    else if(r<0)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<"0\n";
    }

}
