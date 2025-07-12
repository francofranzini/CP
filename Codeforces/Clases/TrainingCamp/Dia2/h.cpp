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

void solve(){
  int n; cin >> n;
  int a[n];
  forn(i,n) cin >> a[i];
  int ordenado = 1;
  for(int i = 1; i<n; i++){
    if(a[i] <= a[i-1]){
      ordenado = 0;
      break;
    }
  }
  if(ordenado == 1) cout << 0 << "\n";
  else{
    if(a[0] == 1 || a[n-1] == n) cout << 1 << "\n";
    else{
      if(a[0] == n && a[n-1] == 1 ) cout << 3 << "\n";
      else{
        cout << 2 << "\n";
      } 
    }
  }
}

int main(){
  fastio;
  int tt = 1;
  cin >> tt;
  while(tt--)
    solve();
}