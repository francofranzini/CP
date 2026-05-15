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



// vector<int> adj[MAXN];

void solve(){
  int n;
  cin >> n;
  int ultimo = -1;
  char c = 'x';
  int flag = 1;
  forn(i,n){
    int v;
    char p;
    cin >> v >> p;
    if(v == ultimo || p == c){
      flag = 0;
    }
    ultimo = v;
    c = p;
  }
  if(flag) cout << "B" << "\n";
  else cout << "M" << "\n";
}
    
int main(){
  fastio;
  int tt = 1;
  cin >> tt;
  while(tt--)
  solve();
}