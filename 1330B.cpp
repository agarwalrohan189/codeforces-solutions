#include <bits/stdc++.h>   
#include <map> 
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
		int a[n+1];
		int h1[200005]={0};
		for(int i=1;i<=n;i++){
			cin>>a[i];
			h1[a[i]]++;
		}
		int flag=0;
		// for(int i=1;i<(n+1)/2;i++){
		// 	if(h1[i]<2||h1[i]>2){
		// 		flag=1;
		// 		break;
		// 	}
		// }
		// if(flag==1){
		// 	cout<<0<<endl;
		// 	continue;
		// }
 
		vector<pair<int,int> > ans;
		int h2[200005]={0};
		int i=1;
		map<int,int> x,y;
		while(i<=n){
			h2[a[i]]++;
			if(h2[a[i]]>=2)
				break;
			x[a[i]]++;
			i++;
		}
		int j=i-1;
		while(i<=n){
			y[a[i]]++;
			i++;
		}
		i=1;
		for(auto it=x.begin();it!=x.end();it++){
			if(it->ff!=i||it->ss>=2){
				flag=1;
				break;
			}
			i++;
		}
		i=1;
		for(auto it=y.begin();it!=y.end();it++){
			if(it->ff!=i||it->ss>=2){
				flag=1;
				break;
			}
			i++;
		}
		if(flag==0&&j!=n&&j!=0){
			ans.pb(mp(j,(n-j)));
		}
		flag=0;
 
		x.clear();
		y.clear();
 
		i=n;
		int h3[200005]={0};
		while(i>0){
			h3[a[i]]++;
			if(h3[a[i]]>=2)
				break;
			x[a[i]]++;
			i--;
		}
		j=i;
		while(i>0){
			y[a[i]]++;
			i--;
		}
		i=1;
 
		for(auto it=x.begin();it!=x.end();it++){
			if(it->ff!=i||it->ss>=2){
				flag=1;
				break;
			}
			i++;
		}
		i=1;
		for(auto it=y.begin();it!=y.end();it++){
			if(it->ff!=i||it->ss>=2){
				flag=1;
				break;
			}
			i++;
		}
		// cout<<"check"<<endl;
 
		if(flag==0&&j!=n&&j!=0){
			if(ans.size()==0||j!=ans[0].ff)
			ans.pb(mp(j,(n-j)));
		}
 
 
		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++){
			cout<<ans[i].ff<<' '<<ans[i].ss<<endl;
		}
	}
}
