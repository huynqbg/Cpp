#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(string a, string b) {
	string x = a + b;
	string y = b + a;
	return y < x; // so truoc phai lon hon sau
}

int main(){
    int t;
    cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<string> v;
		for(int i=0; i<n; i++) {
			string s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		for(auto x: v) {
			cout << x;
		}
		cout << endl;
	}
    return 0;
}


