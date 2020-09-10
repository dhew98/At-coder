#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,k,sum=0;
    cin>>n>>m>>k;
    ll a[n+5]= {0},b[m+5]= {0};
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(ll i=1; i<=m; i++)
    {
        cin>>b[i];
        b[i]+=b[i-1];
    }
    int j=m,i,ans=0;
    for(i=0;i<=n;i++)
    {
        if(a[i]>k)break;
        while(b[j]>k-a[i])
        {
            j--;
        }
        ans=max(i+j,ans);
    }
    cout<<ans<<endl;
    return 0;
}

