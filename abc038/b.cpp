#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll h1,h2,w1,w2;
  cin >> h1 >> w1 >> h2 >> w2;
  if(h1==h2||h1==w2||w1==h2||w1==w2) {
    cout << "YES" << endl;
  }else {
    cout <<"NO" << endl;
  }
}
