#include <bits/stdc++.h>
#define ll long long

using namespace std;

string chTen(string ten) {
    stringstream ss(ten);
    string res = "", token;
    while (ss >> token) {
        res += toupper(token[0]);
        for (int i=1; i<token.size(); i++) {
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.pop_back();
    return res;
}

string chNs(string ns) {
    if (ns[2] != '/') ns = "0" + ns;
    if (ns[5] != '/') ns.insert(3, "0");
    return ns;
}

int cnt = 0;

struct sv {
    string ten, lop, ns, id;
    double gpa;
    
    void nhap() {
        ++cnt;
        id = to_string(cnt);
        while (id.length() < 3) id = "0" + id;
        id = "SV" + id;
        cin.ignore();
        getline(cin, ten);
        cin >> lop >> ns >> gpa;
    }
    
    void in() {
        cout << id << " " << chTen(ten) << " " << lop << ' ' << chNs(ns) << ' ';
        cout << fixed << setprecision(2) << gpa << endl;
    }
};

bool cmp(sv a, sv b) {
    if (a.gpa == b.gpa) {
        return a.id < b.id;
    }
    return a.gpa > b.gpa;
}

int main(){
    int n; cin >> n;
    sv ds[n];
    for (int i=0; i<n; i++) {
        ds[i].nhap();
    }
    sort(ds, ds+n, cmp);
    for (int i=0; i<n; i++) {
        ds[i].in();
    }
    return 0;
}

