#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)
int BS(int minimo, float objetivo){
        float f = objetivo / minimo;
        int i = objetivo / minimo;
        if(f > i) return i+1;
        else{
            return i;
        } 
    }
int main(){
    //ingreso n y k
    //lista de n enteros cuya suma es alfa.k y el maximo elemento de la lista es el minimo
    //posible
    //3 2 ==> min = [1,1,2] = 2.2
    //8 8 ==> [1,1,1,1,1,1,1,1] = 8.1
    //Minimo en c/caso = n*1
    //6 5 = [2,2,2,2,1,1] = 5.2
    //1) Buscar minimo posible ((n-1)/k)*k + k
    //2) Hacer BS de sumas posibles
    int t, n, k;
    cin >> t;
    long min, objetivo;
    vector<int> rta;
    forn(i,t){
        cin >> n >> k;
        min = n;
        objetivo = ((n-1)/k)*k + k;
        rta.push_back(BS(min, objetivo));
    }
    for(auto a: rta){
        cout << a << "\n";
    }


    return 0;   
}