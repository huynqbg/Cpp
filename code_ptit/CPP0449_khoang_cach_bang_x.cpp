#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		set<int> st;
		for(int i=0; i<n; i++) {
			int x; cin >> x;
			st.insert(x);
		}
		int tmp = -1;
		for (auto x: st) {
			// tu duy nguoc
			// dau bai bat tim hieu thoa man thi lay tong so sanh voi cac ptu trong day
			int sum = m + x;
			if (st.find(sum) != st.end()) {
				tmp = 1;
				break;
			}
		}
		cout << tmp << endl;
	}
    return 0;
}
	
