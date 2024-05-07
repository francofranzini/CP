#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

int main(){
    int n, d, f;
    cin >> n >> d >> f;
    int A[d];
    memset(A, 0, sizeof(A));
    forn(i, n){
        int aux;
        cin >> aux;
        A[aux-1] = 1;
    }

    int lo = 0;
    int hi = 0;
    int rta = 0;
    int faltas = 0;
    while(lo<d){
        if(hi<lo) hi = lo;
        while(faltas <= f && hi<d){
            rta = max(rta, hi-lo);
            faltas += !A[hi];
            hi++;
        }
        faltas -= !A[lo];
        lo++;
    }
    rta = max(rta, hi-lo);

    cout << rta;
}