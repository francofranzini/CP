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
  // set<string> s;
  // s.insert("A D E B C F");
  // s.insert("A D C F E B");
  // s.insert("B E D A F C");
  // s.insert("B E F C D A");
  // s.insert("C F E B A D");
  // s.insert("C F A D E B");
  // s.insert("D A B E F C");
  // s.insert("D A F C B E");
  // s.insert("E B A D C F"); 
  // s.insert("E B C F A D");
  // s.insert("F C B E D A");
  // s.insert("F C D A B E");
  string sx[12] = {"ADEBCF", "ADCFEB", "BEDAFC", "BEFCDA", "CFEBAD", "CFADEB", "DABEFC", "DAFCBE", "EBADCF", "EBCFAD", "FCBEDA","FCDABE"};
  string rta = "";
  forn(i, 6){
    char x;
    cin >> x;
    rta += x;
  }
  // cout << rta << "\n";
  forn(i, 12){
    if(rta == sx[i]){
      cout << "VALIDA" << "\n";
      return;
    }
  }
  cout << "NO VALIDA" << "\n";
  return;
  // forn(i, 12){
  //   cout << sa << "\n";
  //   if((sa == sx[i])) cout << "ANASHE"<<"\n";
  // }
  // // if(s.count(sa)) cout << "VALIDA" << "\n";
  // // else cout << "NO VALIDA" << "\n";
  // for(int i = 0; i<12; i++){
  //   if(sa == sx[i]){
  //     cout << "VALIDA" << "\n";
  //     return;
  //   }
  // }
  // cout << "NO VALIDA" << "\n";
}
    
int main(){
  fastio;
  int tt = 1;
  cin >> tt;
  while(tt--)
  solve();
}