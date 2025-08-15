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
	int N; cin >> N;
  multiset<int> flechas;
  int a[N];
  int m[N];
  forn(i,N){
    cin >> a[i];
  }
  m[0] = a[0];
  forn(i, N){
    if(i == 0) continue;
    m[i] = max(m[i-1], a[i]);
  }
  int count = 0;
  forn(i,N){
    if(flechas.count(a[i]) == 0){
      count++;
      flechas.insert(a[i] - 1);
    }
    else{
      auto it = flechas.find(a[i]);
      flechas.erase(it);
      flechas.insert(a[i] - 1);
    }
  }
  cout << count << "\n";


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