#include<bits/stdc++.h>
using namespace std;
int b[1000001];
main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        b[x]+=1;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<b[i]<<endl;
    }
}
