#include<bits/stdc++.h>

using namespace std;
// quay lui: sinh xau nhi phan
int n, x[100], k;

void kq() {
	for(int i=1; i<=n; i++) {
		cout << x[i];
	}
	cout << endl;
}

// ham check so luong k bit 1 thi moi in
bool check() {
	int cnt=0;
	for(int i=1; i<=n; i++) {
		cnt+=x[i];
	}
	return cnt == k;
}

void Try(int i) {
	for(int j=0; j<=1; j++) {
		x[i] = j;
		if (i==n) {
			if(check()) kq();
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
