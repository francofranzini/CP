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


queue<pair<int, int>> q;
int visited[1001][1001];
int distancia[1001][1001];
char steps[1001][1001];

void solve(){
    int n, m; cin >> n >> m;
    char a[n][m];
    vector<pair<int,int>> direcciones = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int ix, iy;
    int haya=0, hayb=0;
    forn(i, n){
        forn(j, m){
            cin >>a[i][j]; distancia[i][j] = INF;
            if(a[i][j] == 'B') hayb=1;
            if(a[i][j] == 'A'){
              ix=i; iy= j;haya=1;
            } 
        }
    }
    if(!haya || !hayb){
      cout << "NO" << "\n";
    }
    distancia[ix][iy] = 0;
    q.push({ix, iy});
    visited[ix][iy] = 1;

    int encontrado = 0;
    int x, y;
    while(!q.empty()){
      pii c = q.front(); q.pop();
      x = c.fi; y = c.se;
      if(a[x][y] == 'B'){
        encontrado = 1;
        cout << "YES" << "\n";
        cout << distancia[x][y] << "\n";
        break;
      } 
      for(auto d: direcciones){
        int nx = c.fi + d.fi;
        int ny = c.se + d.se;
        if(nx>= n || nx < 0 || ny >= m || ny < 0) continue;
        if(a[nx][ny] == '#') continue;
        if(visited[nx][ny]) continue;


        visited[nx][ny] = 1;
        distancia[nx][ny] = distancia[x][y] + 1;
        if(nx < c.fi) steps[nx][ny] = 'U';
        if(nx > c.fi) steps[nx][ny] = 'D';
        if(ny < c.se) steps[nx][ny] = 'L';
        if(ny > c.se) steps[nx][ny] = 'R';
        q.push({nx, ny});
      }
    }

    if(!encontrado) cout << "NO" << "\n";
    else{
      stack<char> s;
      while(a[x][y] != 'A'){
        s.push(steps[x][y]);  
        if(steps[x][y] == 'D') x--;
        else if(steps[x][y] == 'U') x++;
        else if(steps[x][y] == 'L') y++;
        else if(steps[x][y] == 'R') y--;
      }
      while(!s.empty()){
        cout << s.top();
        s.pop();
      }
      cout << "\n";
    }
}
    
int main(){
    fastio;
    int tt = 1;
    // cin >> tt;
    while(tt--)
    solve();
}