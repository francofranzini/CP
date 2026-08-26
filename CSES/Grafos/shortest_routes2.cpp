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
int n, m, q;
long long distancias[502][502];



void solve(){
  cin >> n >> m >> q;
  forr(i, 1, n+1) forr(j, 1, n+1) distancias[i][j] = INF;
  forr(i,1, n+1) distancias[i][i] = 0;
  int x, y;
  forn(i, m){
    long long c; cin >> x >> y >> c;
    distancias[x][y] = min(distancias[x][y], c);
    distancias[y][x] = min(distancias[x][y], c);
  }

  //Floyd Warshall
  forr(k, 1, n+1){
    forr(i, 1, n+1){
      forr(j, 1, n+1){
        if(distancias[i][k] < INF && distancias[k][j] < INF)
          distancias[i][j] = min(distancias[i][j], distancias[i][k] + distancias[k][j]);
      }
    }
  }
  // forr(i, 1, n+1){
  //   forr(j, 1, n+1){
  //     cout << distancias[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  forn(i, q){
    cin >> x >> y;
    // cout << distancias[x][y] << "\n";
    if(distancias[x][y] == INF) cout << -1 << "\n";
    else                        cout << distancias[x][y] << "\n";
  }

}
 
int main() {
  // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  int tt = 1;
  //cin >> tt;
  while(tt--){
    solve();

  }
  return 0;
}