#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], v[n];
		
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		v[0] = a[0] * a[1];
		v[n-1] = a[n-1] * a[n-2];
		for(int i=1; i<n-1; i++) {
			v[i] = a[i-1] * a[i+1];
		}
		for(int x: v) {
			cout << x << " ";
		}
		cout << endl;
	}
    return 0;
}

