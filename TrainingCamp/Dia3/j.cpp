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

int solve(){
  int n, rta = 0; cin >> n;
  string v[n];
  forn(i,n) cin >> v[i];

  for(; rta < sz(v[0]); rta++){
    forn(j,n-1){
      if(v[j][rta] != v[j+1][rta]){
        return rta;
      }
    }
  }
  return rta;
}

int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    cout << solve() << endl;
}