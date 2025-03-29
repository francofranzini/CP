#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    int t;
    cin >> t;
    long long rta[t];
    forn(i, t){
        double n, m, k;
        cin >> n >> m >> k;
        double min = k / n;
        long long min_floor = k / n;
        if (min > min_floor) min_floor += 1;

        long long libres = m - min_floor;//Vacios en peor fila
        long long mesas = libres + 1;
        long long rtai;

        long long longitud_mesa_floor = min_floor / mesas;
        double longitud_mesa = double(min_floor) / double(mesas);
        if (longitud_mesa > longitud_mesa_floor) rtai = longitud_mesa_floor + 1;
        else rtai = longitud_mesa_floor;
        rta[i] = rtai;
    }
    forn(i, t){
        cout << rta[i] << "\n";
    }
    return 0;
}