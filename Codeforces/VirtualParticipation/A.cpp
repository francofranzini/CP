#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    int t;
    cin >> t;
    int rta[t];
    for(int i = 0; i<t ; i++) rta[i] = -1;
    forn(i,t){
        unordered_map<int, int> fecha;
        fecha[3] = 1; fecha[0] = 3; fecha[1] = 1; fecha[2] = 2; fecha[5] = 1;

        int n;
        cin >> n;

        forn(j, n){
            int x; 
            cin >> x;
            if(fecha[x]){
                fecha[x]--;
            }
            if(rta[i] == -1 && fecha[0] == 0 && fecha[1] == 0 && fecha[2] == 0 && fecha[5] == 0 && fecha[3] == 0){
                rta[i] = j+1;
            }
        }
    }
    for(int i = 0; i<t ; i++){
        if(rta[i] == -1) cout << 0 << "\n";
        else cout << rta[i] << "\n";
    }
    return 0;
}