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
#define MAXN 100001    
// Typedefs
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef set<int> si;
    
// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;



vector<int> adj[MAXN];


void dfs(int i, int visited[]){
  visited[i] = 1;
  for(auto a: adj[i]){
    if(visited[a]) continue;
    dfs(a, visited);
  }
}

void solve(){
  int n, m; cin >> n >> m;
  int visited[n+2];
  forn(i, n+2) visited[i] = 0;
  forn(k, m){
    int i, j; cin >> i >> j;
    adj[i].pb(j);
    adj[j].pb(i);
  }
  vector<int> comp;
  for(int i = 1; i < n+1; i++){
    if(visited[i]) continue;
    visited[i] = 1;
    // cout << i << "\n";
    comp.pb(i);
    dfs(i, visited);
  }
  cout << comp.size() -1 << "\n";
  for(int i = 0; i<comp.size()-1; i++){
    cout << comp[i] << " " << comp[i+1] << "\n";
  }
}
    
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
  solve();
}