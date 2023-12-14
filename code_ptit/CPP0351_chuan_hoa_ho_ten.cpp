#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while (t--) {
		int q; cin >> q;
		cin.ignore();
		string ten;
		getline(cin, ten);
		stringstream ss(ten);
		string token;
		vector<string> v;
		while (ss >> token) {
			token[0] = toupper(token[0]);
			for (int i=1; i<token.size(); i++) {
				token[i] = tolower(token[i]);
			}
			v.push_back(token);
		}
		string res = "";
		if (q == 1) {
			res += v[v.size() -1] + " ";
			for (int i=0; i<v.size()-1; i++) {
				res += v[i] + " ";
			}
			res.pop_back();
		}
		if (q == 2) {
			for (int i=1; i<v.size(); i++) {
				res += v[i] + " ";
			}
			res += v[0];
		}
		cout << res << endl;
	}
    return 0;
}

