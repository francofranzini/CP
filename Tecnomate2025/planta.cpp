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
int a[30][30];
int n, m;


void solve(){
  int q, n;
  cin >> q >> n;
  if(n >= 2*q){
    cout << "Nro no valido" << "\n";
    return;
  }

  char rta[q];
  int target = n;
  char tp = '0';
  if(n >= q) {
    forn(i, q) rta[i] = '1';
    target = n - q;

  }
  else{
    forn(i, q) rta[i] = '0';
    target = n;
    tp = '1';
  } 
  int x = q-1;
  while(target--){
    rta[x--] = tp;
  }

  forn(i, q) cout << rta[i];
  cout << "\n"; 
  
  
}
    
int main(){
  fastio;
  int tt = 1;
  cin >> tt;
  while(tt--)
  solve();
}