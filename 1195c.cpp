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
    ll n;
    cin>>n;
    std::vector<ll> a,b;
    for(int i=0;i<n;i++)
    {
    	ll x;
    	cin>>x;
    	a.pb(x);
    }
    for(int i=0;i<n;)
    {
    	    	if(b[i]+a[i+1]>=b[i+1] && i<=n-2 && flag==1)

{
	mx+=b[i];
	i++;
	flag=0;
}
else     	    	if(b[i]+a[i+1]<b[i+1] && i<=n-2 && flag==1)

{
	mx+=b[i+1];
	i+=2;
	flag=0;
}
    else 	    	if(a[i]+b[i+1]>=a[i+1] && i<=n-2 && flag==0)

{
	mx+=a[i];
	i++;
	flag=1;
}
    	 else    	if(a[i]+b[i+1]<a[i+1] && i<=n-2 && flag==0)

{
	mx+=a[i+1];
	i+=2;
	flag=1;
}
    	    else 	if(i==n-1  && flag==0)

{
	mx+=a[i];
	i++;
	flag=1;
}
    	    	else if(i==n-1  && flag==1)

{
	mx+=b[i];
	i++;
	flag=0;
}




    }
    flag=0;
//	cout<<mx<<endl;
ll mxx=0;	
    for(int i=0;i<n;)
    {
    	    	if(b[i]+a[i+1]>=b[i+1] && i<=n-2 && flag==1)

{
	mxx+=b[i];
	i++;
	flag=0;
}
    else 	    	if(b[i]+a[i+1]<b[i+1] && i<=n-2 && flag==1)

{
	mxx+=b[i+1];
	i+=2;
	flag=0;
}
    	 else    	if(a[i]+b[i+1]>=a[i+1] && i<=n-2 && flag==0)

{
	mxx+=a[i];
	i++;
	flag=1;
}
    	    else 	if(a[i]+b[i+1]<a[i+1] && i<=n-2 && flag==0)

{
	mxx+=a[i+1];
	i+=2;
	flag=1;
}
    	    	else if(i==n-1  && flag==0)

{
	mxx+=a[i];
	i++;
	flag=1;
}
    	    	else if(i==n-1  && flag==1)

{
	mxx+=b[i];
	i++;
	flag=0;
}




    }



    
//cout<<mxx<<endl;

if(mx<mxx)
	cout<<mxx;
else
	cout<<mx;
    return 0;
}