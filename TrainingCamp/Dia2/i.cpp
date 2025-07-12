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
const int MAXN = 2e5+5;

vector<int> a(MAXN);

bool p(int x, int y){
  return a[x] < a[y];
}

void solve(){
  int n; cin >> n;
  vector<int> adj[MAXN];
  vector<bool> visited(MAXN);

  forn(i,n-1){
    int a,b; cin >> a >> b;
    adj[a].pb(b); adj[b].pb(a);
  }

  int arr[n];
  forn(i,n){
    cin >> arr[i];
    a[arr[i]] = i;
  }

  for(int i = 1; i <= n; i++) sort(adj[i].begin(), adj[i].end(), p);

  vector<int> ans;
  queue<int> q;
  q.push(1);
  visited[1] = true;
  while(!q.empty()){
    int x = q.front(); q.pop();
    visited[x] = true;
    ans.pb(x);
    for(auto y : adj[x]){
      if(visited[y]) continue;
      q.push(y);
    }
  }
  
  int flag = 1;
  forn(i,n){
    if(ans[i] != arr[i]) flag = 0;
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}

int main(){
  fastio;
  int tt = 1;
  //cin >> tt;
  while(tt--)
    solve();
}