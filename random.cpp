#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

vector<int> usadas;
int cant_pags;

void bienvenida(){
    cout << "Ingrese la cantidad de paginas a estudiar: ";

}

int tirar_pagina(){
    srand(time(0));
    return rand() % cant_pags;
}

void display_usadas(){
    cout << "[ ";
    int a = 0, b = usadas.size();
    if(b){
        while (a < b-1){
            cout << usadas[a] << ", ";
            a++;
        }
        cout << usadas[b-1];
    }
    cout << " ] \n";

}
void funcion(){
    int opcion = 1;
    while(opcion != 2){
        display_usadas();
        cout << "Seleccione operacion: \n 1)Nueva Tirada \n 2) Terminar \n Opcion: ";
        cin >> opcion;
        cout << "\n";
        if(opcion == 1){
            int a = 1;
            int pagina = tirar_pagina();
            while(a){
                if(find(usadas.begin(), usadas.end(), pagina) == usadas.end()) a = 0;
                else{
                    pagina = tirar_pagina();
                }
            }
            usadas.push_back(pagina);
            cout << "La pagina seleccionada fue: " << pagina << "\n";
        }
        

    }
    
}

int main(){

    bienvenida();
    cin >> cant_pags;
    funcion();
    
    return 0;
}