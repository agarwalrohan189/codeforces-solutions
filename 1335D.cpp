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
		int a[9][9];
		string b[9];
		for(int i=0;i<9;i++){
			cin>>b[i];
		}
 
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				a[i][j]=b[i][j]-'0';
			}
		}
		// cout<<endl;
		int i;
		int k;
		k=a[0][0];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[0][0]=k;
 
		k=a[1][3];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[1][3]=k;
 
		k=a[2][6];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[2][6]=k;
 
		k=a[3][1];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[3][1]=k;
 
 
		k=a[4][4];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[4][4]=k;
 
 
		k=a[5][7];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[5][7]=k;
 
 
 
		k=a[6][2];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[6][2]=k;
 
 
		k=a[7][5];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[7][5]=k;
 
 
		k=a[8][8];
		i=1;
		while(i<10){
			if(k!=i){
				k=i;
				break;
			}
			i++;
		}
		a[8][8]=k;
 
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
 
 
	}
}
