#include <bits/stdc++.h>

using namespace std;

// to hop chap k cua n
int n, k, a[100];
bool check;

// khoi tao cau hinh dau tien. gia tri bang index
void init() {
	for (int i=1; i<=k; i++) a[i] = i;
}

void sinh() {
	int i=k;
	// bat dau tu index cuoi cung cua so
	while (i>=1 && a[i] == n - k + i) --i; 
	// duyet khi nao gap a[i] co gia tri nho hon n - k + i
	
	// xay ra 2th dung vong lap
	if (i==0) check = false; // da sinh ra cau hinh cuoi cung
	else { // khi gap phan tu ko thoa man dk a[i] < n - k + i thi tang len 1 don vi
		a[i]++;
		for (int j=i+1; j<=k; j++) 
			// cac so sau no cung tang len 1 don vi so voi gia tri cua no
			a[j] = a[j-1] + 1;
	}
}

int main() {
	cin >> n >> k;
	check = true;
	// khoi tao cau hinh dau tien
	init();
	while (check) {
		// in ra cac cau hinh
		for (int i=1; i<=k; i++) cout << a[i];
		cout << endl;
		// goi den ham sinh cac keu hinh tiep theo
		sinh(); // ham nay chay cho den cau hinh cuoi cung roi cho bien check = false => dung vong lap
	}
	return 0;
}
