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
const int MAXN = 10000000;
// const long MOD = 10e9 + 7;
 
 
int n, m;

vector<int> adj[MAXN];
int colour[MAXN];
int visited[MAXN];


void dfs(int i, int color){
  
}


void solve(){
  cin >> n >> m;
  //Create a loop
  forn(i, m){
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
} 
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();

  return 0;
}