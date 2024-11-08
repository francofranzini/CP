#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    int n, m;
    cin >> n >> m;
    int matriz[n][m];
    forn(i, n){
        forn(j, m){
            cin >> matriz[i][j];
        }
    }
    string rta = "NADA";
    if(matriz[0][0] == matriz[1][0]) rta = "HORIZONTAL";
    if(matriz[0][0] == matriz[0][1]) rta = "VERTICAL";
    int valido = 1;
    if(rta == "VERTICAL"){
        for(int i = 1; i<n; ++i){
            for(int j = 0; j < m; ++j){
                if(matriz[i][j] == matriz[i-1][j]) valido = 0;
            }
        }
        for(int i = 0; i<n; ++i){
            for(int j = 1; j<m; ++j){
                if(matriz[i][j] != matriz[i][j-1]) valido = 0;
            }
        }
    }
    if(rta == "HORIZONTAL"){
        for(int i = 0; i<m; ++i){
            for(int j = 1; j < n; j++){
                if(matriz[i][j] == matriz[i][j-1]) valido = 0;
            }
        }
        for(int i = 1; i<n; ++i){
            for(int j = 0; j<n; j++){
                if(matriz[i][j] != matriz[i-1][j]) valido = 0;
            }
        }
    }
    if(valido == 1) cout << rta << "\n";
    else cout << "NADA" << "\n";
    return 0;
}