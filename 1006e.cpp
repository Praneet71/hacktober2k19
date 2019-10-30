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
void dfs(ll n)
{
    vis[n]=1;
    a[n]=k;
    d[k]=n;
    k++;
    b[n]=j;
    j++;
    for(int i=0;i!=se[n].size();i++)
    {
        if(vis[se[n][i]]==0)
            dfs(se[n][i]);
    }
    c[n]=j;
    j++;
}
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
	while(q--)
    {
    	ll u,w;
    	cin>>u>>w;
    	if((a[u]+w-1)<n)
    	{
    		if(b[d[a[u]+w-1]]>=b[u] && c[d[a[u]+w-1]]<=c[u])
    			cout<<d[a[u]+w-1]<<endl;
    		else
    			cout<<-1<<endl;
    	}
    		else
    			cout<<-1<<endl;

    }
    return 0;
}
