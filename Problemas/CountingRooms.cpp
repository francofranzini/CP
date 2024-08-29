#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

char matriz[1001][1001];
int n, m;

void spread(int a, int b){
    if(a >= n | n < 0) return;
    if(b >= m | m < 0) return;
    if(matriz[a][b] == '#') return;
    
    matriz[a][b] = '#';
    spread(a+1, b); spread(a,b+1); spread(a-1,b); spread(a, b-1);
}

int main(){
    


    cin >> n >> m;
    forn(i, n){
        forn(j, m){
            cin >> matriz[i][j];
        }
    }
    int rta = 0;
    forn(i,n){
        forn(j,m){
            if(matriz[i][j] == '.'){
                rta++;
                spread(i, j);
            }
        }
    }
    cout << rta << "\n";

    return 0;
}