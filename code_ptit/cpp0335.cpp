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
		int max = -1e9;
		string token;
		while (ss >> token) {
			int num = stoi(token);
			if (num > max) {
				max = num;
			}
		}
		cout << max << endl;
	}
    return 0;
}

