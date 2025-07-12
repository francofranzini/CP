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
  int n1, n2, k1, k2; cin >> n1 >> n2 >> k1 >> k2;
  if(n1 > n2) cout << "First" << endl;
  else cout << "Second" << endl;
}

int main(){
  fastio;
  int tt = 1;
  //  cin >> tt;
  while(tt--)
    solve();
}