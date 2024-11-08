#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    int n, m;
    cin >> n;
    char mat[n][n];
    forn(i,n){
        forn(j,n){
            cin >> mat[i][j];
        }
    }
    int q;
    cin >> q;
    int a, x, y;
    forn(i, q){
        cin >> a >> x >> y;
        if(a == 1){
            mat[x-1][y-1] = "A";
        }
        if(a == 2){
            if(x==n){
                if(y == n){
                    mat[x-1][y-1] = "A";
                    mat[x-2][y-1] = "A";
                    mat[x-1][y-2] = "A";
                }
                else{
                    if(y == 1){
                        mat[x-1][y-1] = "A";
                        mat[x-2][y-1] = "A";
                        mat[x-1][y] = "A";
                    }
                    else{
                        mat[x-1][y-1] = "A";
                        mat[x-2][y-1] = "A";
                        
                    }
                }
            }
        }

    }
    return 0;
}