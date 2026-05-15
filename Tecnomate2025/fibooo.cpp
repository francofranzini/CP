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

void fibo(long long x,long long y){
  long long sum= x + y;
  if(sum > 10000000000)return;
  cout << sum << ", ";
  fibo(y, sum);
}

void solve(){
  cout << "{1, 1";
  fibo(1,1);
  cout << "}";
}
    
int main(){
  fastio;
  int tt = 1;
  //cin >> tt;
  while(tt--)
  solve();
}