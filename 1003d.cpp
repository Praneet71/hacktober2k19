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
    return 0;
}