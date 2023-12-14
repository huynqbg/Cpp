#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(ll a, ll b) {
	ll x = a*a + b*b;
	ll c = sqrt(x);
	if (c*c == x)
		return c;
	return 0;
}

void solve() {
	int n; cin >> n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i=0; i<n-2; i++) {
		for(int j=i+1; j<n-1; j++) {
			ll x = check(a[i], a[j]);
			if (x != 0 && binary_search(a+j+1, a+n, x)) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
