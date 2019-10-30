#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mp make_pair
#define pb push_back
#define f first
#define s second
ll gcd(ll a, ll  b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //map<ll,ll>mp;
    ll n,k;
    cin>>n>>k;
    ll a[k+5]={0};
	for(int i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	a[x]++;
    }
    ll ans=0;
    for(int i=1;i<=k;i++)
    {
    	if(a[i]%2 )
    	{
    		ans+=(a[i]-1);
    		a[i]=1;

    	}
    	else
    		{
    			ans+=a[i];
    			a[i]=0;
    		}

    }
    ll flag=0;
    for(int i=1;i<=k;i++)
    {
    	if(a[i] && flag==0)
    	{
    		ans++;
    		a[i]=0;
    		flag=1;
    	}
    	else if(a[i] && flag)
    	{
    		a[i]=0;
    		flag=0;
    	}
    }
    cout<<ans<<endl;
    return 0;
}
