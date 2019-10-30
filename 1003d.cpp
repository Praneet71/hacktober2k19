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
    ll n,q;
    cin>>n>>q;
    ll a[n],p[33]={0};
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	ll t=log2(a[i]);
    	p[t]++;
    }
	while(q--)
    {
    	ll k,cnt=0;
    	cin>>k;
    	for(int j=32;j>=0;j--)
    	{
    			ll r=pow(2,j);
    			ll t=(k/r);
    			if(t>p[j])
    				t=p[j];
    			cnt+=t;
    			k-=(r*t);
//    		}
    	}
    	if(k==0)
    		cout<<cnt<<endl;
    	else
    		cout<<-1<<endl;

    }
    return 0;
}
