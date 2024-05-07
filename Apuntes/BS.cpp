#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)


/*
Binary Search
[#,#, A ,#,m,#, B ,#,#]

Search A:
n = size array
Inicio = 0, Fin = n
m = (Inicio + Fin) / 2

1) [#,#, A ,#,m,#, B ,#,#]
Es A > Array[m] V A < Array[m]? --> Fin = m

Inicio = 0
Fin = m
m = (Inicio + Fin) / 2
2) [#, #, A, #, m]

En este caso Array[m] = A --> Encontramos A en la posicion 'm'


*/

int BinarySearch(vector<int> Array, int A){
    int n = Array.size();
    int Inicio = -1;
    int Fin = n;
//  -1 [0, 1, 2, 3... n-2, n-1] n
    while(Fin - Inicio > 1){
        int m = (Fin + Inicio) / 2;
        if (Array[m] >= A) Fin = m;
        else Inicio = m;
    }
    if(Fin < n && Array[Fin] == A) return Fin;
    return -1;
}
/* Una forma de entender esta metodologia es, convertir el array en un predicado, y luego
    buscar el primer elemento verdadero
    Si yo busco x >= 7 en [0,1,2,5,7,8,9]:
    es lo mismo que ver   [0,0,0,0,1,1,1]; 

    En el caso Definido en la funcion BinarySearch, obtenemos el primer valor que es mayor o igual
    al A que buscamos, puesto que sigue su ejecucion acercando Inicio con Fin, disminuyendo Fin
    cuando el punto medio(Array[m]) es mayor o igual que A, o aumentando Inicio cuando el punto medio(Array[m])
    es menor que A.
*/

int main(){

    int n, m;
    cin >> n >> m;
    int x;
    vector<int> array;
    forn(i, n){
        cin >> x;
        array.push_back(x);
    }
    cout << BinarySearch(array, m);

    return 0;
}