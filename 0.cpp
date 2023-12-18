#include <bits/stdc++.h>

using namespace std;

int n,ok, k;// k la so luong bit 1 can in
char a[100];
// khoi tao cho cau hinh dau tien.
void khoi_tao() {
	for (int i=1; i<=n; i++) a[i] = 'A';
}

// phuong phap sinh cac cau hinh tiep theo 
void pp_sinh() {
	int k=n;
	// bat dau tu index cuoi cung cua so. tim vi tri co gia tri bang 'A' thi dung
	while (k>=1 && a[k] == 'B') {
		a[k] = 'A';
		--k;
	}
	// xay ra 2th dung vong lap
	if (k==0) ok = 0; // neu index ve 0 thi da in ra cau hinh cuoi cung
	else a[k] = 'B'; // nguoc lai thi gan cho gia tri tai index do bang 'B'
}

bool check() {
	int cnt =0;
	for(int i=1; i<=n; i++) {
		if (a[i] == 'B')
			++cnt; // dem cac bit 'B' cua tung cau hinh 
	}
	return cnt == k;
}

int main() {
	cin >> n >> k;
	ok=1;
	// khoi tao cau hinh dau tien
	khoi_tao();
	while (ok==1) {
		// in ra cac cau hinh
		if (check()) { // thoa man so luong k bit 'b'
			for (int i=1; i<=n; i++) cout << a[i];
			cout << endl;
		}
		// goi den ham sinh cac keu hinh tiep theo
		pp_sinh(); // ham nay chay cho den cau hinh cuoi cung roi cho bien ok = false => dung vong lap
	}
	return 0;
}

