#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    set<int> st;
    map<int, int> mp;
    for(int i=0; i<n; i++) {
    	for(int j=0; j<n; j++) {
    		cin >> a[i][j];
    		st.insert(a[i][j]); // loc ra nhung so xh trong hang
		}
		
		for (auto x: st) {
			mp[x]++;
		}
		st.clear();
	}
	
	bool ok = false;
	
	for(auto x: mp) {
		if (x.second == n) {
			cout << x.first << " ";
			ok = true;
		}
	}
	
	if (!ok) cout << "NOT FOUND";
    return 0;
}

