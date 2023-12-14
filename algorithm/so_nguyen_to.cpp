#include <bits/stdc++.h>
#define ll long long
#define maxNum (int)1e7

using namespace std;

int isPrime[maxNum+1];

void sang() {
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i=2; i<=maxNum; i++) {
		isPrime[i] = true;
	}
	for (int i=2; i<=sqrt(maxNum); i++) {
		if (isPrime[i]) {
			for (int j=i*i; j<=maxNum; j+=i) 
				isPrime[j] = false;
		}
	}
}

bool prime(ll n) {
	for (ll i=2; i<=sqrt(n); i++) {
		if (n%i==0) return false;
	}
	return n>1;
}

int main() {
	sang();
	int n, cnt=0; cin >> n;
	ll s = pow(10, n-1);
	ll e = pow(10, n) - 1;
	for (ll i=s; i<=e; i++) {
		if (prime(i)) ++cnt;
	}
	cout << cnt;
	return 0;
}

