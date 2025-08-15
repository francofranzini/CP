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
const int MAXN = 1e6 + 3;
 

 
 
void solve(){
  unordered_map<int, int> pos;
  int n, k; cin >> n >> k;
  vector<int> a;
  forn(i,n){
    int p, c;
    cin >> p;
    cin >> c;
    pos[p] = c; 
    a.pb(p);
  } 
  int rta = 1;
  forn(i,n){
    if(a[i] != i+1){
      if(pos[i+1] != pos[a[i]]){
        rta = 0;
        break;
      }
    }
  }
  if(rta) cout << "Y" <<"\n";
  else cout << "N" << "\n";
  
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