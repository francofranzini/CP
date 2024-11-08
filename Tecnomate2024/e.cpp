#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    
    int n, m;
    cin >> n >> m;
    char teclado[n][m];
    forn(i,n){
        forn(j,m){
            cin >> teclado[i][j];
        }
    }
    int q;
    cin >> q;
    vector<int> rtas;
    forn(i,q){
        int z;
        char l;
        string s;
        cin >> z >> s;
        int rta_aux = 0;
        int x=0, y=0; //Posiciones
        for(int j = 0; j<z; ++j)
        {
            
            char buscar = s[j];
            forn(f,n){
                forn(c, m){
                    if(teclado[f][c] == buscar){

                        rta_aux += (abs(f - x) + abs(c - y));
                        x = f;
                        y = c;
                }
            }
            }
        }
        rtas.push_back(rta_aux);
    }
    for(auto a: rtas) cout << a << "\n";
    return 0;
}