#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	map<string, ll> mp1;
	for (int i=0; i<10; i++) {
		string a; 
		int b; 
		cin >> a >> b;
		mp1.insert({a, b});
		
	}
	int n; cin >> n;
	while(n--) {
		string ct;
		cin >> ct;
		map<string, ll> mp;
		ll sum = 0;
		int i=0;
		while(i<ct.size())  {
			string tnt="", sl=""; // ten nguyen so, so luong
			// lay ten nguyen to
			while(isalpha(ct[i]) && i < ct.size()) {
				tnt += ct[i];
				++i;
			}
			// lay so luong nguyen tu cua nguyen to  
			while(isdigit(ct[i]) && i < ct.size()) {
				sl+=ct[i];
				++i;
			}
			// nguyen tu khoi
			sum += stoi(sl) * mp1[tnt];
		}
		cout << sum << endl;
	}
    return 0;
}

