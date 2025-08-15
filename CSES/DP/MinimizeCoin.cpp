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


void solve(){
  cin >> n >> x;
  int coins[n];
  
  forn(i, x+1) memo[i] = INF;
  forn(i, n) cin >> coins[i];
  memo[0] = 0;

  for(int i = 1; i<=x; i++){
    forn(j, n){
      if(i - coins[j] >= 0) memo[i] = min(memo[i], memo[i-coins[j]] + 1);
    }
  }
  cout << (memo[x] >= INF ? -1 : memo[x]) << "\n";
}
 
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();
}