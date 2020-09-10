#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,rem;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        if(rem==7)
        {
            flag=1;
            break;
        }
        n=n/10;
    }
    if(flag==1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}
