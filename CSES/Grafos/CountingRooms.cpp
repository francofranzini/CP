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
 
 
int n, x;
 
int memo[MAXN];
set<int> coins;
 

char a[1001][1001];
void dfs(int i, int j, int n, int m){
  if(i >= n || i < 0 || j >= m || j< 0) return;
  if(a[i][j] == '#') return;
 
  a[i][j] = '#';
  dfs(i+1, j, n, m);
  dfs(i-1, j, n, m);
  dfs(i, j+1, n, m);
  dfs(i, j-1, n, m);
}

void solve(){
  int n, m; cin >> n >> m;
  forn(i, n){
    forn(j, m){
      cin >> a[i][j];
    }
  }
  int rta = 0;
  forn(i, n){
    forn(j, m){
      if(a[i][j] == '.'){
        rta++;
        dfs(i, j, n, m);
      }
    }
  }

  cout << rta << endl;
}
 
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();
}