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
	int n; cin >> n;
  int mini = INF, maxi = 0, min_i, min_m;
  forn(i, n){
    int aux; cin >> aux;
    if(aux <= mini){
      mini = aux;
      min_i = i;
    }
    if(aux > maxi){
      maxi = aux;
      min_m = i;
    }
  }
  if(min_m > min_i) min_m--;
  cout << min_m + (n-1-min_i) << "\n";
}
int main() {
    fastio;
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}