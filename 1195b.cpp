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
    ll n,k;
    cin>>n>>k;
    ll ss=n+k;
    ss*=2;
    ll t=sqrt(9+(4*ss));
    t=(t-3)/2;
    cout<<n-t<<endl;
    return 0;
}
