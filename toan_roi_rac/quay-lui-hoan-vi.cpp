#include<bits/stdc++.h>

using namespace std;
// quay lui: hoan vi n phan tu
int n, x[100], used[100];

void in() {
	for(int i=1; i<=n; i++) {
		cout << x[i];
	}
	cout << endl;
}

void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(used[j] == 0) { // neu so do chua su dung
			x[i] = j;
			used[j] = 1; // danh dau la da su dung
			if (i==n) {
				in();
			} else {
				Try(i+1);
			}
			//back track
			used[j] = 0;
		}
	}
}

int main(){
    cin >> n;
    Try(1);
    return 0;
}
