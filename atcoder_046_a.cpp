#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x,ans;
    cin>>x;
    if(x<=90)
    {
        ans=360/x;
        if(360%x)
            cout<<ans+1<<endl;
        else
            cout<<ans<<endl;
    }
    else
    {
        ans=360/x;
        if(360%x)
            cout<<ans+1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}

