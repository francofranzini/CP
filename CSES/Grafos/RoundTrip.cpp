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
 
 
int n, m, encontrado = 0;

vector<int> adj[MAXN];
int visited[MAXN];
set <int> visitado;
int padre[MAXN];
vector<int> camino;

void reconstruir (int p, int i){
  int x = p;
  camino.push_back(i);
  while(x != i){
    encontrado+=1;
    camino.push_back(x);
    x = padre[x];
  }
  encontrado += 1;
  camino.push_back(i);

}

void dfs(int i, int ancestro){
  if(encontrado) return;
  padre[i] = ancestro;
  if(visitado.find(i) != visitado.end()){
    encontrado = 1;
    reconstruir(padre[i], i);
    return;
  } 
  visitado.insert(i);
  for(auto a: adj[i]){
    // cout << a << "\n";
    if(a != ancestro){
      dfs(a, i);
    }
  }

}


void solve(){
  cin >> n >> m;
  //Create a loop
  forn(i, m){
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int i = 1; i<=n; i++){
    if(!encontrado && visitado.find(i) == visitado.end()) dfs(i, i);
  }
} 
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();
    if(!encontrado) cout << "IMPOSSIBLE" << "\n";
    else{
      cout << encontrado << "\n";
      forn(i, encontrado) cout << camino[i] << " ";
      cout << "\n";
    }

  return 0;
}