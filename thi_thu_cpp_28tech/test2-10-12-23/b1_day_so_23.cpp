#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

ll a[1000002];

void solve(int n) {
   
    a[1] = 1;
    a[2] = 1;
    for(int i=3; i<=n; i++) {
        a[i] = (2*a[i-1] + 3*a[i-2]) % mod;
    }
    
}

int main(){
    int n; cin >> n;
    solve(n);
    cout << a[n];
    return 0;
}

