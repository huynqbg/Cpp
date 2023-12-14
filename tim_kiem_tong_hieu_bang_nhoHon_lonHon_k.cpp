#include <bits/stdc++.h>
#define ll long long

using namespace std;

void tongNhoHonK() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll cnt=0;
	for(int i=0; i<n; i++) {
		// tim kiem vi tri phan tu >= k-a[i]
		// thi cac phan tu truoc vi tri nay se la cac vtri thoa man
		auto it = lower_bound(a.begin()+i+1, a.end(), k-a[i]);
		int x = it - (a.begin() + i) - 1; // so cap thoa man
		cnt += x; 
	}
	cout << cnt;
	return;
}

void tongBangK() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for(int i=0; i<n;i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		ll cnt = 0;
		for(int i=0; i<n; i++) {
			auto it1= lower_bound(a.begin() + i+1, a.end(), k-a[i]);
			auto it2= upper_bound(a.begin() + i+1, a.end(), k-a[i]);
			if (it1 == it2) {
				cnt+=0;
			} else {
				int x = (it2 - (a.begin() + i)) - (it1 - (a.begin() + i));
				cnt += x;
			}
		}
		cout << cnt << endl;
	}
	return;
}

void tongLonHonK() {
	int n, k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll cnt=0;
	for(int i=0; i<n; i++) {
		// tu duy a[i] + a[j] > k => a[i] > k - a[j] => tim slg ptu > k-a[i]
		// tim kiem vi tri phan tu > k-a[i]
		auto it = upper_bound(a+i+1, a+n, k-a[i]);
		int x = a+n-it; 
		cnt += x; 
	}
	cout << cnt;
	return;
}

void hieuNhoHonK() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x: a) cin >> x;
		sort(a, a+n);
		ll cnt=0;
		for(int i=0; i<n; i++) {
			// tu duy nhu tren
			auto it = lower_bound(a+i+1, a+n, k+a[i]);
			int x = it - (a+i) - 1;
			cnt+=x;
		}
		cout << cnt << endl;
	}
	return;
}

int main(){
//	tongNhoHonK();
//	tongBangK();
//	tongLonHonK();
	hieuNhoHonK();	
    return 0;
}

