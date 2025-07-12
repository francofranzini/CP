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
  int n; cin >> n;
  string s;
  cin >> s;
  int room[15];
  forn(i, 10) room[i] = 0;
  for(int i = 0, k = 0, j = 9; i < n; i++){
    if(s[i] == 'L'){
      room[k] = 1;
      k++;
      while(k<= 9){
        if(room[k] == 0 || k > j) break;
        k++;
      }
    }
    if(s[i] == 'R'){
      room[j] = 1;
      j--;
      while(j>=0){
        if(room[j] == 0 || k > j) break;
        j--;
      }
    }
    if(s[i] >= '0' && s[i] <= '9'){
      room[(s[i] - '0')] = 0;
      int mini = 9, maxi = 0;
      forn(i,10){
        if(room[i] == 0){
          mini = min(i, mini);
          maxi = max(maxi, i);
        }
      }
      k = mini;
      j = maxi;
    }
  }
  forn(i, 10) cout << room[i];
  cout << "\n";
  
}

int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();
  return 0;
}