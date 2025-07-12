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
  int n, q;
  cin >> n >> q;
  int a[n];
  forn(i,n) cin >> a[i];
  forn(i, q){
    int x; cin >> x;
    int j = n-1;
    int rta = 0;
    while (j >= 0 && x >=a[j]){
      x = (x|a[j]) - (x&a[j]);
      rta++;
      j--;
    }
    cout << rta << " ";
  }
  cout << "\n";
}

int main(){
  fastio;
  int tt; cin >> tt;
  while(tt--)
    solve();
}