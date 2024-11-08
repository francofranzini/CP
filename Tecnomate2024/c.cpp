#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    
    int n, k, p;
    cin >> n >> k >> p;
    int matriz[n];
    forn(i, n){
        char c;
        cin >> c;
        matriz[i] = c-'0';
        // cin >> matriz[i];
    }

    int t[n+1];
    t[0] = 0;
    forn(i, n) t[i+1] = t[i] + matriz[i];

    bool win = false;
    forn(i, n-k+1) {
        if (t[i+k]-t[i] + p >= k) {
            win = true;
            break;
        }
    }

    cout << (win ? "SI" : "NO") << "\n";
    return 0;

    //necesito k 1's, y tengo p fichas
    //si tengo k en [a, b] puedo ganar
    int a = 0;
    int b = k-1;
    int unos = 0;
    forn(i, b+1) unos += matriz[i];
    int tablero_ganado = 0;
    int gano = 0;
    if(unos >= k) tablero_ganado = 1;
    while(b < n-1 && gano == 0 && tablero_ganado == 0)
    {
        ++b;
        ++a;
        if(matriz[a-1] == 1) unos -= 1;
        if(matriz[b] == 1) unos += 1;
        if(unos >= k) tablero_ganado = 1;
    }
    if(((unos + p) >= k) && tablero_ganado == 0) gano = 1;
    a = 1;
    b = k;
    while(b < n && gano == 0 && tablero_ganado == 0)
    {
        if(matriz[a-1] == 1) unos -= 1;
        if(matriz[b] == 1) unos += 1;
        if((unos + p) >= k) gano = 1;
        ++b;
        ++a;
    }
    if(gano == 1) cout << "SI" << "\n";
    else cout << "NO" << "\n";
    return 0;
}