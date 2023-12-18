#include <bits/stdc++.h>

using namespace std;

int n, k, a[100], idx[100];
bool check;

void init() {
	for (int i=1; i<=n; i++) {
		cin >> idx[i];
	}
}

void sinh() {
	int i=k;
	while (i>=1 && a[i] == n - k + i) --i; 
	
	if (i==0) check = false;
	else {
		a[i]++;
		int cnt = 1;
		for (int j=i+1; j<=k; j++) {
			a[j] = a[i] + cnt;
			++cnt;
		}
	}
}

// chi can nhap idx[] va sort(idx[]), viec con lai nhu sinh to hop
int main() {
	cin >> n >> k;
	check = true;
	init();
	for(int i=1; i<=n; i++) a[i] = i; // array a[] dung de luu index
	sort(idx+1, idx+n+1);
	while (check) {
		for (int i=k; i>=1; i--) cout << idx[a[i]] << " ";
		cout << endl;
		sinh();
	}
	return 0;
}
