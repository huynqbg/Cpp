#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n], b[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    //chuyen thanh ma tran chuyen vi
    for(int i=0; i<n; i++) {
    	for(int j=0; j<n; j++) {
    		b[i][j] = a[j][i];
		}
	}
	
	// sort theo hang
	for(int i=0; i<n; i++) {
		sort(b[i], b[i]+n);
	}
	
	// in ra
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}

