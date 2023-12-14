#include <bits/stdc++.h> 

using namespace std;

int a[100], n, ok;

// khoi tao
void init() {
	for (int i=1; i<=n; i++) a[i] = i;
}

// sinh cau hinh tiep theo
void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i+1]) --i; // lap cho cho toi khi tim dc thg a[i] nho hon a[i+1]
	if (i==0) ok = 0; // da sinh ra cau hinh cuoi cung
	else {
		int j=n;
		// lap tren doan [i+1, n]
		while (a[i] > a[j]) j--; // lap cho toi khi tim dc thang a[j] nho nhat va > a[i]
		swap(a[i], a[j]); // doi cho 2 so do cho nhau
		// lat nguoc doan tu [i+1, n]
		reverse(a+i+1, a+n+1);
	}
	
}

int main() {
	cin >> n;
	ok = 1;
	init(); // khoi tao cau hinh dau tien
	while (ok) {
		for (int i=1; i<=n; i++) cout << a[i];
		cout << endl;
		sinh();// sinh ra cau hinh tiep theo
	}
	return 0;
}
