#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;
int A[1000][1000];
int B[1000][1000];

int main(){
    
    int n;
    cin >> n;
   
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> A[i][j];
        }
    }
    forn(i, n){
        int x = 1001;
        forn(j, n){
            x = min(x, A[i][j]);
        }
        forn(j, n){
            B[i][j] = A[i][j] % x;
        }
    }


    int rta = 0;
    forn(i, n){
        int x = 0;
        forn(j, n){
            if(B[j][i] != 0){
                x = 1;
            }
        }
        if(x == 0) rta++;
        x = 0;
    }

    cout << rta << "\n";

    

    return 0;
}