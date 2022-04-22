#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, x; vector<ll> v, v1;
        cin >> n;
        for (int i=0; i<n; ++i) {
           cin >> x;
           v.push_back(x);
           v1.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i=0; i<n-1; ++i) {
            if (v1[i]>v1[i+1]) {
                swap(v1[i], v1[i+1]);
                break;
            }    
        }
        bool poss = false;
        for (int i=0; i<n; ++i) {
            if (v[i] != v1[i]) {
                poss = true;
                break;
            }
        }
        if (poss)
            cout << "NO" << endl;
        else cout << "YES" << endl;    
    }
}