#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)


//Busqueda binaria de 0 a Sumatoria/2
int busqueda_binaria(long long sumatoria){
    if(sumatoria == 1) return 1;
    long long a = 0;
    long long b = sumatoria;
    while(b-a > 1){
        long long mid = (b+a)/2;
        if(mid*mid > sumatoria){
            b = mid;
        } 
        else{
            a = mid;
        }
    }
    if(a*a == sumatoria) return 1;
    else return 0;
}
int main(){
    
    vector<string> rta;
    
    int t; //test cases
    cin >> t;
    forn(i, t){
        int n;
        long long sum = 0;
        cin >> n; //Number of Buckets
        long long b; //Squares per bucket
        forn(j, n){
            cin >> b;
            sum += b; //total squares
        }
        if(busqueda_binaria(sum)) rta.push_back("YES");
        else rta.push_back("NO");
    }
    
    for(auto a: rta) cout << a << "\n";
    
    return 0;
}