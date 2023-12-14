#include <bits/stdc++.h>
#define ll long long

using namespace std;

// chuan hoa ten
string chTen(string ten) {
	string res = "";
	stringstream ss(ten);
	string token;
	while (ss >> token) {
		token[0] = toupper(token[0]);
		for (int i=1; i<token.length(); i++) {
			token[i] = tolower(token[i]);
		}
		res += token + " ";
	}
	res.pop_back(); // xoa ki tu khoang cach o cuoi cung
	return res;
}

// chuan hoa ngay sinh
string chNs(string ns) {
	if (ns[2] != '/') ns = "0" + ns;
	if (ns[5] != '/') ns.insert(3, "0");
	return ns;
}

struct SinhVien {
	string ten, lop, ns;
	double gpa;
	
	friend istream &operator >> (istream &in, SinhVien &a) {
		getline(in, a.ten);
		in >> a.lop >> a.ns >> a.gpa;
		return in;
	}
	
	friend ostream &operator << (ostream &out, SinhVien a) {
		string msv = "B20DCCN001 ";
		out << msv << chTen(a.ten) << ' ' << a.lop << ' ' << chNs(a.ns) << ' ';
		out << fixed << setprecision(2) << a.gpa << endl;
		return out;
	}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

