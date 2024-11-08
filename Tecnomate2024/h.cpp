#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    int x[100000][3];
    int y[100000][3];
    int t;
    cin >> t;
    forn(i, t){
        forn(j,3){
            cin >> x[i][j];
            cin >> y[i][j];
        }
    }
    forn(i, t){
        if(abs((x[i][1]-x[i][0])/(y[i][1]-y[i][0]) == abs((x[i][2]-x[i][0])/(y[i][2]-y[i][0])))) cout << "RECTO" << "\n";
        else{
            if(y[i][1] > y[i][0]){
                if(x[i][2] > x[i][1]) cout << "DERECHA" << "\n";
                else cout << "IZQUIERDA" << "\n";
            }
            else{
                if(x[i][2] <= x[i][1]) cout << "DERECHA" << "\n";
                else cout << "IZQUIERDA" << "\n";
            }
        }
    }
    return 0;
}