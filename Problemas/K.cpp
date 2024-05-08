#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

int n, q;


int bs(int ar[], int aux){
    int a = -1;
    int b = n;
    while(b-a > 1){
        int c = (a + b)/2;
        if(ar[c] >= aux) b = c;
        else a = c;
    }
    if(b<n && ar[b] == aux) return b;
    return -1;
}


int main(){
    cin >> n >> q;
    int ar[n];
    forn(i, n){
        cin >> ar[i];
    }

    int rta[q];
    int aux;
    forn(i, q){
        cin >> aux;
        rta[i] = bs(ar, aux);
    }
    for(int a = 0; a < q; a++) cout << rta[a] << "\n";
    return 0;
}