#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, count=0;
        cin >> n;
        vector<int> a(n),b(n);
        map<pair<ll, ll>, ll> mp;
        for (int i=0; i<n; ++i)
            cin >> a[i];
        for (int i=0; i<n; ++i)
            cin >> b[i];
            
        for (int i=0; i<n; ++i) {
            count += mp[{a[i], b[i]}];
            mp[{b[i], a[i]}]++;
        }
        cout << count << endl;
    } 
}
