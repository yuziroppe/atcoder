#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
		string x;
		cin >> x;
		int s = 0;
		int ans = x.size();

		for(int i=0;i<x.size();i++) {
				if(x[i]=='S') s++;
				if(x[i]=='T') {
						if(s>0){
								ans -= 2;
								s--;
						}
				}
		}

		cout << ans << endl;		
}
