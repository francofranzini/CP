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
  int n; cin >> n;
  set<int> cero, uno;
  int dir_ini;
  forn(i, n){
    int t, dir;
    cin >> t >> dir;
    if(i == 0) dir_ini = dir;
    if(dir == 0) cero.insert(t);
    else uno.insert(t);
  }
  int t;
  if(dir_ini == 0) t = *(cero.begin());
  else t = *(uno.begin());
  

  while(cero.size() + uno.size() != 0){
    if(dir_ini == 0){
      while(cero.size() > 0 && ){
        t = *(cero.begin()) + 10;
        cero.erase(cero.begin());
      }
    }
    else{
      while(uno.size() > 0 && ){
        t = *(uno.begin()) + 10;
        uno.erase(uno.begin());
      }
    }
    
  }
  cout << t << "\n";
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