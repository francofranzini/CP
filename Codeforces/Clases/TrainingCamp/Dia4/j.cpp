#include <bits/stdc++.h>
using namespace std;
  
// Macros
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define fst first
#define snd second
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

int main(){
  int n; cin >> n;
  vector<int> v(n+1), b;
  vector<pii> ans(n+1);
  for(int i = 1; i <= n; i++){
    int l, r; cin >> l >> r;
    ans[i] = {l,r};
    if(l == 0) b.pb(i);
    v[i] = r;
  }
  forn(i,sz(b)-1){
    int aux = b[i];
    while(v[aux] != 0) aux = v[aux];
    ans[aux] = {ans[aux].fst, b[i+1]};
    ans[b[i+1]] = {aux, ans[b[i+1]].snd};
  }

  for(int i = 1; i <= n; i++){
    cout << ans[i].fst << " " << ans[i].snd << endl;
  }
}