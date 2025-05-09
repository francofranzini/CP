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

int sepuede(int n, si &columnas, si &d1, si &d2, int fila, int columna){
	if(columnas.find(columna) != columnas.end()) return 0;
	if(d1.find(fila+columna) != d1.end()) return 0;
	if(d2.find(fila - columna) != d2.end()) return 0;
	return 1;
}
void mostrar_tablero(vector<vi> tablero, int n){
	forn(i, n){
		forn(j, n){
			if(tablero[i][j] == 1 ? cout << 'Q' : cout << ".");
		}
		cout << "\n";
	}
	cout << "\n";
}

void backtrack(int n, si &columnas, si &d1, si &d2, int fila, vector<vi> tablero){
	if(fila == n) mostrar_tablero(tablero, n);
	forn(i, n){
		if(sepuede(n, columnas, d1, d2, fila, i)){
			tablero[fila][i] = 1;
			columnas.insert(i);
			d1.insert(fila + i);
			d2.insert(fila - i);
			backtrack(n, columnas, d1, d2, fila+1, tablero);
			tablero[fila][i] = 0;
			columnas.erase(i);
			d1.erase(fila+i);
			d2.erase(fila - i);
		}
	}
}


void solve() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n, 0));
	si d1, d2, columnas;
	backtrack(n, columnas, d1, d2, 0, a);
}

int main() {
    fastio;
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}