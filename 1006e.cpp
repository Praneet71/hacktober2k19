#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mp make_pair
#define pb push_back
#define f first
#define s second
vector<ll> se[200005];
ll vis[200005]={0};
ll j=1,k=0;
ll a[200005],b[200005],c[200005],d[200005];
int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q;
    cin>>n>>q;

    for(int i=2;i<=n;i++)
    {
    	ll x;
    	cin>>x;
    	se[x].pb(i);

    }
    dfs(1);
    return 0;
}