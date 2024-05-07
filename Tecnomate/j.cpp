#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

int main(){
    int n, x;
    cin >> n;
    vector<int> A;
    forn(i, n){
        cin >> x;
        A.push_back(x);
    }
    sort(A.rbegin(), A.rend());
    long long s = 0;
    for(int i = 0; i<n; i+=2){
        s+=A[i];
    }
    cout << s << "\n";
    return 0;
}