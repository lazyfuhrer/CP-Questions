#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
	    ll n,x, min=LONG_MAX, max=LONG_MIN, val;
	    cin >> n >> x;
	    for (int i=0; i<n; ++i) {
	        cin >> val;
	        if (val>max)
	            max = val;
	        if (val<min)
	            min = val;    
	    }
	    if ((max>x && min>x) || (max<x && min<x))
	        cout << "NO" << endl;
	    else cout << "YES" << endl;     
	}
}
