#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n, x;
    cin >> n >> x;
    int cnt=0;
    for(int i=1; i<=sqrt(x); i++) {
        if(x%i==0) {
        	if(x/i == i && i <=n) {
        		++cnt;
			} else if((x/i)<=n && i<=n) {
				cnt+=2;
			}
		}
    }
    cout << cnt;
    return 0;
}

