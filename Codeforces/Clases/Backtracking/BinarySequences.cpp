#include <bits/stdc++.h>
using namespace std;

// Macros
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define fi first
#define se second

// Typedefs
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// Functions
void cadena(int n, string s){
    //0+cadena(n-1)
    //1+cadena(n-1)
    if(n == 0){
        cout << s << "\n";
        return;
    }
        
    string cadena1 = s + "0";
    cadena(n-1, cadena1);
    string cadena2 = s + "1";
    cadena(n-1, cadena2);
    
}
void solve() {
    int n;
    cin >> n;
    cadena(n, "");

    


}

int main() {
    fastio;
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}