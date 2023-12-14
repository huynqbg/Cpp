#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll f[100];

void fibo() {
	f[0] = 0;
	f[1] = 1;
	for (int i=2; i<=93; i++) {
		f[i] = f[i-1] + f[i-2];
	}
}

int main() {
	fibo();
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		bool ok = false;
		for (int i=0; i<=93; i++) {
			if (f[i] == n) {
				ok = true; 
				break;
			}
		}
		cout << ok;
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

