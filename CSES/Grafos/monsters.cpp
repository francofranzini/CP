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
 
const int MAXN = 1005;
const int MOD = 1e9+7;

char paso[MAXN][MAXN];
// string mat[MAXN];
ii previous[MAXN][MAXN];
tuple<int, int, char> moves[]{
  {0,1,'R'}, {1,0,'D'},{0,-1,'L'},{-1,0,'U'}};
 
void solve(){
  int n, m; cin >> n >> m;
  char mat[MAXN][MAXN];
  char aux;
  ii a;
  queue<tuple<int, int, bool>> perso;
  forn(i, n){
    forn(j, m){
      cin >> aux;
      if(aux == 'A'){
        a = {i, j};
        mat[i][j] = '#';
      }
      if(aux == 'M'){
        perso.push({i, j, false});
        mat[i][j] = '#';
      }
      else mat[i][j] = aux;
    }
  }
  perso.push({a.first, a.second, true});
  ii e = {-1, -1};
  int llego = 0;
  ii bruh = e;


  if(a.fst == 0 || a.fst == n-1 || a.snd == m-1 || a.snd == 0){
    cout << "YES" << endl;
    cout << 0 << endl;
    return;
  }


  while(!perso.empty()){
    auto [x, y, modo] = perso.front(); perso.pop();

    // cout << x << " " << y << "\n";

    for(auto [xi, yi, mov]: moves){
      int nx = x + xi;
      int ny = y + yi;
      // cout << nx << " " << ny;
      if(nx < 0 || nx >= n || ny < 0 || ny >= m || mat[nx][ny] == '#') continue;

      mat[nx][ny] = '#';
      previous[nx][ny] = {x, y};
      paso[nx][ny] = mov;
      if(modo && (nx == n-1 || nx == 0 || ny == m-1 || ny == 0)){
        e = {nx, ny};
        // cout << nx << " " << ny<< endl;
        llego = 1;
        break;
      }
      perso.push({nx, ny, modo});
    }
    if(llego){
      break;
    }
  }
  string s;
  if(llego){
    while(e != a){
      // llego = 1;
      s += paso[e.first][e.second];
      e = previous[e.first][e.second];
    }
    reverse(s.begin(), s.end());
    cout << "YES" << "\n";
    cout << s.length() << "\n";
    cout << s << "\n";
  }
  else{
    cout << "NO" << "\n";
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