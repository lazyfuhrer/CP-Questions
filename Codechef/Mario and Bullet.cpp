#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x,y,z;
        cin >> x >> y >> z;
        cout << ((z-(y/x) < 1) ? 0 : (z-(y/x))) << endl;
    }
}