#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)
int const MAXN = 1000;
int sol(int ini, int inj);
int n, m;
int matriz[MAXN][MAXN];
int memo[MAXN][MAXN];
int main(){
    memset(memo, -1, sizeof(memo));
    cin >> n >> m;
    char aux;
    int ini, inj;
    forn(i, m){
        forn(j, n){
            cin >> aux;
            if(aux == 'J') matriz[i][j] = 1; 
            if(aux == '.') matriz[i][j] = 0;
            if(aux == 'M') matriz[i][j] = -2;
            if(aux == 'A'){
                ini = i;
                inj = j;
            }
        }
    }
    int rta = 0;
    if(ini == 0) rta = max(sol(ini, inj+1), sol(ini+1, inj+1));
    else{
        if(ini == m) rta = max(sol(ini, inj+1), sol(ini-1, inj+1));
        else{
            rta += max(max(sol(ini, inj + 1),sol(ini-1, inj+1)),sol(ini + 1, inj+1));
        }
    }

    cout << rta;

    return 0;
}
int sol(int ini, int inj){
    if(memo[ini][inj] != -1){
        return memo[ini][inj];
    }
    else{
        int rta = matriz[ini][inj];
        if(rta == -2){
            memo[ini][inj] = 0;
            return 0;
        }
        if(inj == n) return 0;
        if(ini == 0) rta += max(sol(ini, inj+1), sol(ini+1, inj+1));
        else{
            if(ini == m) rta += max(sol(ini, inj+1), sol(ini-1, inj+1));
            else{
                rta += max(max(sol(ini, inj + 1),sol(ini-1, inj+1)),sol(ini + 1, inj+1));
            }
        }
        memo[ini][inj] = rta;
        return rta;
    }
}
