#include <bits/stdc++.h>
#define ll long long

using namespace std;

string tong(string a, string b) {
	int len = max(a.size(), b.size());
	while(a.size() < len) a = "0" + a;
	while(b.size() < len) b = "0" + b;
	
	string kq ="";
	int nho = 0;
	for(int i=len-1; i>=0; i--) {
		int x = (a[i] -'0') + (b[i]-'0') + nho;
		nho = x / 10;
		kq = to_string(x%10) + kq;
	}
	
	if (nho > 0) {
		kq = to_string(nho) + kq;
	}
	return kq;
}


string hieu(string a, string b) {
	int len = max(a.size(), b.size());
	while(a.size() < len) a = "0" + a;
	while(b.size() < len) b ="0" + b;
	
	if (a < b) swap(a, b);
	
	string kq = "";
	int nho = 0;
	for(int i=len-1; i>=0; i--) {
		int x = (a[i] -'0') - (b[i]-'0') - nho;
		if (x<0) {
			x+=10;
			nho = 1;
		} else {
			nho = 0;
		}
		kq = to_string(x) + kq;
	}
	return kq;
}

int main(){
    int t; cin >> t;
    while(t--) {
    	string x, y;
    	cin >> x >> y;
    	cout << hieu(x, y) << endl;
	}
    return 0;
}

