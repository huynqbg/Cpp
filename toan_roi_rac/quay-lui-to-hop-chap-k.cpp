#include<bits/stdc++.h>

using namespace std;
// quay lui: sinh xau nhi phan
int n, x[100], k;

void in() {
	for(int i=1; i<=k; i++) {
		cout << x[i];
	}
	cout << endl;
}

// phan tu sau co gia tri nho nhat bang ptu trc + 1 : x[i-1] + 1
// gia tri toi da cua phan tu o vtri i la: n-k+i 
void Try(int i) {
	for(int j=x[i-1]+1; j<=n-k+i; j++) {
		x[i] = j;
		if (i==k) {
			in();
		} else {
			Try(i+1);
		}
	}
}

int main(){
    cin >> n >> k;
    Try(1);
    return 0;
}
