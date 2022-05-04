#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, m, x;
        cin >> n >> m >> x;
        if (x==m) cout << 0 << endl;
        else cout << (n*x)/(x+1) << endl;
    }
}
