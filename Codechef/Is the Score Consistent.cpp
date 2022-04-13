#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin >> a >> b;
        cin >> c >> d;
        if (c<a || d<b)
            cout << "IMPOSSIBLE" << endl;
        else cout << "POSSIBLE" << endl;
    }
}