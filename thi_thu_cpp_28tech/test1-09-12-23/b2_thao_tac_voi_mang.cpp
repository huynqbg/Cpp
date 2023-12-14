#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n, d;
    cin >> n >> d;
    ll a[n];
    for (ll i=0; i<n; i++) {
        cin >> a[i];
    }
    
    ll cnt = 0;
    for (ll i=0; i<n-1; i++) {
        while (a[i] >= a[i+1]) {
            a[i+1] += d;
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}

