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
  long long a[49]={1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049};
  long long x=1, y=1;

  // cin >> x >>y;
  while(cin >> x >> y){
    long long b = min(x, y);
    if(b==1){
      if(x==1 && y==1) cout<<1<<'\n';
      else cout<< 2<<'\n';
      continue;
    }
    long long inf=-1;
    long long sup=50;

    while(1 < sup - inf){
      long long med = inf + (sup-inf)/2;
      if(a[med] > b) sup=med;
      else inf=med; 
    }
    cout<< (inf+1) << '\n';
  }
}
  
    
int main(){
  fastio;
  int tt = 1;
  //cin >> tt;
  while(tt--)
  solve();
}