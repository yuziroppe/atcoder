#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 100005
using namespace std;
int dp[MAX];
int main() {
  int n;
  cin >> n;
  dp[0] = 0;
  for(int i=1;i<=n;i++) {
    dp[i] = MAX;
    int power=1;
    while(power<=i) {
      dp[i]=min(dp[i], dp[i-power]+1);
      power*=6;
    }
    power=1;
    while(power<=i) {
      dp[i]=min(dp[i], dp[i-power]+1);
      power*=9;
    }
  }
  cout << dp[n] << endl;
  return 0;
}
