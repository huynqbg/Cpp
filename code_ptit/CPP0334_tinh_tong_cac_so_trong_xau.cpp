#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		for (int i=0; i<s.size(); i++) {
			if (!isdigit(s[i])) s[i] = ' ';
		}
		stringstream ss(s);
		int sum = 0;
		string token;
		while (ss >> token) {
			sum += stoi(token);
		}
		cout << sum << endl;
	}
    return 0;
}

