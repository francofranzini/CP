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
	int n;
  cin >> n;
  int rta = 0;
  int nigi = 0;
  char aux;
  forn(i, n){
    forn(j,n){
      cin >> aux;
      if(aux == 'N') nigi++;
      if(aux == 'B') nigi = 0;
      if(nigi == 2){
        rta++;
        nigi = 0;
      }
    }
    nigi = 0;
  }
  cout << rta << "\n";
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