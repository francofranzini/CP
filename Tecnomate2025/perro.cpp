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


void spread(int i, int j){
  if(i < 0 || i >= n || j < 0 || j>=m){
    return;
  }
  a[i][j]++;
}

void solve(){

  cin >> n >> m;
  
  forn(i, n){
    forn(j, m){
      char aux;
      cin >> aux;
      if(aux == '.') a[i][j] = 0;
      else a[i][j] = -1000;
    }
  }
  forn(i, n){
    forn(j, m){
      if(a[i][j] < 0){
        spread(i+1, j);
        spread(i-1, j);
        spread(i, j+1);
        spread(i, j-1);
        spread(i+1, j+1);
        spread(i+1, j-1);
        spread(i-1, j+1);
        spread(i-1, j-1);
      } 
    }
  }
  forn(i, n){
    forn(j, m){
      if(a[i][j] < 0) cout << "*" << " ";
      else cout << a[i][j] << " "; 
    }
    cout << "\n";
  }
  
}
    
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
  solve();
}