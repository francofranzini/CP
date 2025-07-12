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

   
void solve() {
	ll b, c, d; cin >> b >> c >> d;

  int a = (b|d) - (b&d);
  if(a == c) cout << -1 << endl;
  else cout << a << endl;
}
int main() {
    fastio;
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}