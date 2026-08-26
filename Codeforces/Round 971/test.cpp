#include <bits/stdc++.h>
using namespace std;
 
#define forr(i,a,b) for(int i = (int)a; i < (int)b; i++)
#define forn(i,n) forr(i,0,n)
#define dforr(i,a,b) for(int i = (int)b-1; i >= (int)a; i--)
#define dforn(i,n) dforr(i,0,n)
#define sz(x) ((int)x.size())
#define pb push_back
#define fst first
#define snd second
#define endl '\n'
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
 
const int MAXN = 1e5+1;
const int MOD = 1e9+7;
const long long INF = 1e18;
int n, m;


void solve(){
  cin >> n >> m;
  cout <<  m - n << "\n";
  return;
}
 
int main() {
  // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  int tt = 1;
  cin >> tt;
  while(tt--){
    solve();

  }
  return 0;
}