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
 
int main(){
	fastio();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int hash[200005]={0};
		int same=0, diff=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			hash[a[i]]++;
		}
 
		for(int i=0;i<n;i++){
			same=max(hash[a[i]],same);
			if(hash[a[i]]>=1){
				diff++;
				hash[a[i]]=0;
			}
		}
 
		if(diff==same){
			same--;
			diff--;
		}
 
		cout<<min(diff,same)<<endl;
		
	}
}
