#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

int main(){
    string ana, bartolo;
    cin >> ana >> bartolo;
    if(ana == "Tijera"){
        if(bartolo == ana) cout << "Empate";
        if(bartolo == "Papel") cout << "Ana";
        if(bartolo == "Piedra") cout << "Bartolo";
    }else{
        if(ana == "Papel"){
            if(bartolo == ana) cout << "Empate";
            if(bartolo == "Piedra") cout << "Ana";
            if(bartolo == "Tijera") cout << "Bartolo";
        }
        else{
            if(bartolo == ana) cout << "Empate";
            if(bartolo == "Tijera") cout << "Ana";
            if(bartolo == "Papel") cout << "Bartolo";
        }
    }
    return 0;
}