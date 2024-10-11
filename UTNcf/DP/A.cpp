#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    

    int tiempo = 60 * 4;
    int p, m;
    cin >> p >> m;
    if (m >= tiempo) {
        cout << 0;
        return 0;
    }
    int i = 0;
    tiempo -= m;
    while(tiempo >= (i + 1) * 5 && i < p){
        i++;
        tiempo -= i * 5;

    }
    cout << i;
    return 0;
}