#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    
    int t;
    cin >> t;
    string te;
    int bandera = 0;
    if(t > 110 || t <65){
        te = "Te extrano";
        bandera = 1;
    } 
    if(t>= 65 && t <= 75) te = "Te Blanco";
    if(t>75 && t <= 80) te = "Te Verde";
    if(t > 80 && t <86) te = "Te Amarillo";
    if(t>85 && t <96) te = "Te Oolong";
    if(t>95 && t < 111) te = "Te Negro";

    string c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    if(bandera == 0){
        if(c1 == "SI" && c2 == "SI" && c3 == "SI" && c4 == "NO" && c5 == "SI") te.append(" Gingergrey");
        if(c1 == "SI" && c2 == "SI" && c3 == "SI" && c4 == "SI" && c5 == "SI") te.append(" Karma");
        if(c1 == "NO" && c2 == "SI" && c3 == "NO" && c4 == "SI" && c5 == "NO") te.append(" Police");
        if(c1 == "SI" && c2 == "NO" && c3 == "SI" && c4 == "SI" && c5 == "NO") te.append(" Golang");
    }
    cout << te << "\n";
    return 0;
}