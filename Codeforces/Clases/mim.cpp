#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)

//resolver con BS en Recta numerica
//con floats
int p(double tiempo, int a[], int v[],int n){
    double i=-1e19, j=1e19;
    //i = lo mas a la izquierda que se puede ir 
    //j = lo mas a la derecha que se puede ir 
    forn(x,n){
        // [i  =====>   [a[i]-v[i]*tiempo        a[i]        a[i]+v[i]*t]  <======     j]
        i = max(i, double(a[x]) - double(v[x])*tiempo);
        j = min(j, double(a[x]) + double(v[x])*tiempo);
    }
    return i<=j;

}
void solve(){
    int n;
    cin >> n;
    int a[n], v[n];
    forn(i, n){
        cin >> a[i];
    }
    forn(i, n){
        cin >> v[i];
    }
    double i = 0.0, j = 2e9;
    while(j-i > 0.0000001){
        double t = i + (j-i)/2.0;
        if(p(t, a, v, n)) j = t;
        else i = t;
    }
    cout << setprecision(10) <<j << "\n";

}   

int main(){
    int t;
    // cin >> t;
    t = 1;
    while(t--){
        solve();
    }
 
    return 0;
}