#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;

int main(){
    int n, m, tot=0; cin >> n >> m;
    string mat[10000];

    forn(i, n){
        cin >> mat[i];
    }

    forn(i, n){
        forn(j, m-2){
            if(((mat[i][j] == 'b' || mat[i][j] == 'B') && (mat[i][j+1] == 'u' || mat[i][j+1] == 'U') && (mat[i][j+2] == 'g' || mat[i][j+2] == 'G')) || ((mat[i][j] == 'g' || mat[i][j] == 'G') && (mat[i][j+1] == 'u' || mat[i][j+1] == 'U') && (mat[i][j+2] == 'b' || mat[i][j+2] == 'B'))) tot++;
        }
    }

    forn(i, m){
        forn(j, n-2){
            if(((mat[j][i] == 'b' || mat[j][i] == 'B') && (mat[j+1][i] == 'u' || mat[j+1][i] == 'U') && (mat[j+2][i] == 'g' || mat[j+2][i] == 'G')) || ((mat[j][i] == 'g' || mat[j][i] == 'G') && (mat[j+1][i] == 'u' || mat[j+1][i] == 'U') && (mat[j+2][i] == 'b' || mat[j+2][i] == 'B'))) tot++;
        }
    }

    cout << tot << "\n";

    return 0;
}