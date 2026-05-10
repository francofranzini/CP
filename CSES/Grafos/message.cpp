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

int target;


void dfs(int i, int visited[], int *v){
  visited[i] = 1;
  if(i == target) {
    (*v) = 1;
    return;
  }
  for(auto a: adj[i]){
    if(visited[a]) continue;
    dfs(a, visited, v);
  }
}

void solve(){
  int n, m; cin >> n >> m;
  target = n;
  int visited[n+2];
  forn(i, n+2) visited[i] = 0;
  forn(k, m){
    int i, j; cin >> i >> j;
    adj[i].pb(j);
    adj[j].pb(i);
  }
  int v = 0;
  dfs(1, visited, &v);

  if(v){
    queue<int> q;
    int v2[n+2];
    int d[n+2];
    int prec[n+2];
    forn(i, n+2){
      v2[i] = 0;
      d[i] = 0;
    } 
    q.push(1);
    v2[1] = 1;
    d[1] = 1;
    while(!q.empty()){
      int s = q.front();q.pop();
      v2[s] = 1;
      for(auto a: adj[s]){
        if(v2[a]) continue;
        d[a] = d[s] + 1;
        v2[a] = 1;
        prec[a] = s;
        q.push(a);
      }
    }
    cout << d[n] << "\n";
    stack<int> s;
    int cur = n;
    while(cur != 1){
      s.push(cur);
      cur = prec[cur];
    }
    s.push(1);

    while(!s.empty()){
      cout << s.top() << " ";
      s.pop();
    }
    cout << "\n";
  }
  else cout << "IMPOSSIBLE" << "\n";
}
    
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
  solve();
}