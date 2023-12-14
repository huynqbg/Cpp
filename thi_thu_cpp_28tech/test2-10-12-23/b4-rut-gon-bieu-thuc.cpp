#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        map<string, int> mp;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        
        while(getline(ss, token, '+')) {
            if (token[0] == ' ') {
                token.erase(0, 1);
            }
            string hs = "", b = "";
            int i=0;
            while(isdigit(token[i]) && i<token.size()) {
                hs += token[i];
                ++i;
            }
            for (int j=i; j<token.size(); j++) {
                if (token[j] != ' ') {
                    b += token[j];
                }
            }
            mp[b] += stoi(hs);
        }
        
        auto em = mp.end();
        em--; // end map
        for (auto it: mp) {
            if (it != *em) {
                cout << it.second << it.first << " + ";
            } else {
                cout << it.second << it.first;
            }
        }
        cout << endl;
    }
    
    return 0;
}

