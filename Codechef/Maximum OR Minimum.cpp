#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x; int ones=0, zeros=0;
        cin >> n;
        for (int i=0; i<n; ++i) {
            cin >> x;
            if (x) ones++;
            else zeros++;
        }
        cout << ((ones>=zeros) ? 1 : 0) << endl;
    }
}
