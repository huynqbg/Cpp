#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    map<ll, ll> mp;
    ll n; cin >> n;
    for (ll i=2; i<=sqrt(n); i++) {
        while (n%i==0) {
            mp[i]++;
            n/=i;
        }
    }
    if (n!=1) mp[n]++;
    ll max = -1e9;
    for (auto x: mp) {
        if (x.second > max) max = x.second;
    }
    for (auto x: mp) {
        if (x.second == max) {
            cout << x.first << " " << x.second;
            break;
        }
    }
    return 0;
}

