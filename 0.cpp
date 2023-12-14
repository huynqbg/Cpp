#include<bits/stdc++.h>

using namespace std;
// quay lui: sinh xau nhi phan
int n, x[100], k;

void kq() {
	for(int i=1; i<=k; i++) {
		cout << x[i];
	}
	cout << endl;
}

void Try(int i) {
	for(int j=x[i-1]+1; j<=n-k+i; j++) {
		x[i] = j;
		if (i==n) {
			kq();
		} else {
			Try(i+1);
		}
	}
}


int main(){
    cin >> n;
    Try(1);
    return 0;
}
