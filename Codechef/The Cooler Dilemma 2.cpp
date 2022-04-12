#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll x,y;
        cin >> x >> y;
        if (x>=y)
            cout << 0 << endl;
        else cout << ((y%x==0) ? (y/x)-1 : (y/x)) << endl;
    }
}