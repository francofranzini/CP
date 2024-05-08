#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)


int n, t;

int main(){
    cin >> n;
    
    if(n % 2 == 0 && n > 2 && n <= 100) cout << "YES";
    else cout << "NO";

    return 0;
}