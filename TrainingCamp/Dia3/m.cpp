#include <bits/stdc++.h>
using namespace std;

// Macros
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define fi first
#define se second
#define forn(i, n) for(int i = 0; i<n; i++)

// Typedefs
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef set<int> si;

// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

void solve(){
  int a, b, m, r, t = -1; cin >> a >> b >> m >> r;
  vector<int> v(m+1,-1);
  forn(i,m+1){
    r = (a*r+b) % m;
    if(v[r] != -1){
      t = i - v[r];
      break;
    }
    v[r] = i;
  }
  cout << t << endl;
}

int main(){
  fastio;
  int tt = 1;
  //  cin >> tt;
  while(tt--)
    solve();
}