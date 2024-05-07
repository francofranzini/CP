#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

int main(){
    int n;
    cin >> n;
    int A[100000];
    forn(i,n){
        cin >> A[i];
    }
    int ultimo = A[0];
    for(int i = 1; i<n; i++){
        if(ultimo == n){
            if(A[i] != 1){
                cout << "NO" << "\n";
                return 0;
            }
            ultimo = A[i];
            continue;
        }
        if(ultimo != A[i] - 1){
            cout << "NO" << "\n";
            return 0;
        }
        ultimo = A[i];
    }
    cout << "SI" << "\n";

    return 0;
}