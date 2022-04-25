#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long fact(long long n)
{
    long long x=1;
    for(int i=1;i<=n;i++)
    {
        x=(x*i);
    }
    return x;
}
long long poww(long long a,long long b)
{
    long long ans=1;
    while(b)
    {
        if(b%2)
        {
            ans=(ans*a);
        }
        a=(a*a);
        b=b/2;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll bufferp,recordp,record;
    cin>>bufferp>>recordp>>record;
    ll arr[record];
    for(ll i=0;i<record;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+record);
    for(ll i=0;i<record;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
} 
