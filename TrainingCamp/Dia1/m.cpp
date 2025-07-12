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
	int n, k; cin >> n >> k;
  int a[n];
  forn(i,n) cin >> a[i];
  sort(a, a+n);
  int i = 0, j = n-1;
  int rta = 0;
  while(j >= 0 && a[j] >= k){
    rta++;
    j--;
  }
  i = j;
  for(int cont = 1; i >= 0; i--){
    if(a[i]*cont >= k){
      rta++;
      cont = 0;
    } 
    cont++;
  }
  cout << rta << "\n";
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