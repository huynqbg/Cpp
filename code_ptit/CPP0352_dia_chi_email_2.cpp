#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	map<string, int> mp;
	while (t--) {
		string ten;
		getline(cin, ten);
		stringstream ss(ten);
		string token;
		vector<string> v;
		while (ss >> token) {
			for (int i=0; i<token.size(); i++) {
				token[i] = tolower(token[i]);
			}
			v.push_back(token);
		}
		string email = v.back();
		for (int i=0; i<v.size()-1; i++) {
			email += v[i][0];
		}
		// neu email chua xuat hien lan nao 
		if (mp.find(email) == mp.end()) {
			cout << email << "@ptit.edu.vn";
			mp[email]++;
		} else { // email da xuat hien
			cout << email << ++mp[email] << "@ptit.edu.vn";
		}
		cout << endl;
	}
    return 0;
}

