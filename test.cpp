#include<bits/stdc++.h>
using namespace std;
/*
// Ordered Set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define os_find(k) find_by_order(k)
#define os_order(k) order_of_key(k)
*/


#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define f0(i,n) for( ll i = 0; i < ( n ); i ++)
#define f1(i,n) for(i = 1; i <= ( n ); i ++)
#define f(i,m,n) for(auto i = ( m ); i <= ( n ); i ++)
#define nl cout<<"\n"
#define  MOD 1000000007
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rall(v) v.rbegin(), v.rend()
#define SZ(x) ((ll)x.size())
#define mem(a, b) memset(a, b, sizeof(a));
#define make_graph(k) int x,y; f0(i,k){cin>>x>>y; adj[x].pb(y); adj[y].pb(x);}
#define dekh cout<<"dekh"


typedef vector<ll> vl;


//ll MOD = 1000000007LL;
/*
ll Pow(ll a, ll b, ll mod){
	ll x = 1LL, y = a;
	while (b > 0LL){
		if (b%2LL){
			x = (x*y);
			if(x>mod) x%=mod;
		}
		y = (y*y);
		if(y>mod) y%=mod;
		b /= 2LL;
	}
	return x;
}*/

/* ll fact[100005];
fact[0]=1LL;
    for(ll i=1LL;i<=100005LL;i++)
    {
        fact[i]=(fact[i-1]*i)%MOD;

    }
ll mod_inv(ll n, ll mod){
	return Pow(n, mod-2LL, mod);
}

ll nCr(ll n, ll k, ll mod){
	return (fact[n]* ((mod_inv(fact[k],mod)*mod_inv(fact[n-k],mod))%mod) )%mod;
}*/

/*vector<ll>adj[200005];
 ll vis[200005]={0};
 char arr[55][55];

ll flag = 0;
bool dfs(ll x, ll pr)
{
    if(x>2500)return false;
    cout<<x<<" "<<pr;nl;
    vis[x]=1;

    for(auto child : adj[x])
    {   if(!vis[child])
         {
            if(dfs(child, x)==true)return true;
         }
         else
         {
             if(child!=pr)return true;
         }

    }
    return false;


}*/

//ll solve()

int main()
{
    fast
     test
     {
         cout<<"sdgs";
     }
}

