#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(string a, string b) {
    int l1 = a.size();
    int l2 = b.size();
    if (l1 == l2) {
        return a<b;
    }
    return l1<l2;
}

int main(){
    string s; 
    cin >> s;
    int i=0;
    int len=s.length();
    vector<string> v;
    // nhung ki tu la chu se chuyen thanh rong de tach dc do
    for(int i=0; i<len; i++) {
    	if( !isdigit(s[i]) ) {
    		s[i]=' ';
		}
	}
	stringstream ss(s);
	string token;
	while(ss >> token) {
		int idx = -1;
		for(int i=0; i<token.size(); i++) {
			// tim index so dau tien != 0 de loai bo het nhung so 0 ow dau
			if(token[i] != '0') {
				idx = i;
				break;
			}
		}
		// loai bo so 0 o dau
		if(idx != -1) {
			token.erase(0, idx);
		} else { // neu so do toan 0 thi gan = 0
			token = "0";
		}
		v.push_back(token);
	}
	// sap sep de lay ra so lon nhat
    sort(v.begin(), v.end(), cmp);
    cout << v.back();
    return 0;
}

