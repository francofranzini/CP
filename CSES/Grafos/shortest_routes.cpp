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
const long long INF = 2e15;
int n, m;
vector<ii> adj[MAXN];
long long distancia[MAXN];


void dijkstra(){
  set<int> fijadas;
  forn(i, n+1) distancia[i] = INF;
  distancia[1] = 0;
  int processed[n+1] = {0};
  priority_queue<pair<long long, long long>> q;
  //{costo, nodo}
  q.push({0, 1});
  while(!q.empty()){
    int a = q.top().second; q.pop();
    if(processed[a]) continue;
    processed[a] = true;
    for(auto u: adj[a]){
      long long b = u.first, w = u.second;
      if(distancia[a] + w < distancia[b]){
        distancia[b] = distancia[a] + w;
        q.push({-distancia[b], b});
      }
    }
  }
  forn(i, n) cout << distancia[i+1] << " ";
  cout << endl;
}

void solve(){
  cin >> n >> m;
  int x, y, c;
  forn(i, m){
    cin >> x >> y >> c;
    adj[x].push_back({y, c});
  }

  dijkstra();
  
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