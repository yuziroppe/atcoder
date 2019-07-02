#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
const ll INF=1e10+1;
using namespace std;
#define NOT_EXIST -1

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

int main(){
	ll N,M;
	cin >> N >> M;
	vector<ll> dp(N+1,0);
	rep(i,M){
		ll l,r;
		cin >> l >> r;
		dp[l]++;
		dp[r+1]--;
	}
	for(ll i=1;i<=N;i++){
		dp[i] = dp[i] + dp[i-1];
	}

	ll ans = 0;
	for(ll i=1;i<=N;i++){
		if(dp[i]==M) ans++;
	}
	cout << ans << endl;
}