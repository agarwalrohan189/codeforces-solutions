#include <bits/stdc++.h>    
using namespace std;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cerr<<(#x)<<" : "<<x<<endl;
#define ll  long long
#define ld  long double
#define fill(a,val) memset(a,val,sizeof(a))
#define mp  make_pair
#define ff  first
#define ss  second
#define pii pair<ll,ll>
#define sq(x) ((x)*(x))
#define all(v) v.begin(),v.end()
#define endl "\n"
#define fo(i,n) for(int i=0;i<n;i++)
#define foo(i,x,n) for(int i=x;i<n;i++)
const ll MOD   = 1000*1000*1000+7;
const ll MOD2  = 998244353;
const ll N = 1000*1000+5;
const double PI  = 3.14159265;
ll power(ll x,ll y,ll p){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
 
ll max_bit(ll n) 
{ 
    if (n == 0) 
        return 0; 
  
    int msb = 0; 
    while (n != 0) { 
        n = n / 2; 
        msb++; 
    } 
  
    return msb; 
} 
 
ll max(ll a, ll b){
	if(a>=b)
		return a;
	return b;
}
 
int main(){
	fastio();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		ll max_no=LLONG_MIN;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ll ans=0;
		int i=0;
		ll max_diff=0;
		while(i<n){
			if(a[i]>max_no)
				max_no=a[i];
			else
				max_diff=max(max_diff,max_no-a[i]);
			i++;
 
		}
		ans+=max_bit(max_diff);
		cout<<ans<<endl;
	}
}
