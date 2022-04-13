#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,x, a, sum=0;
        cin >> n >> x;
        for (int i=0; i<n-1; ++i) {
            cin >> a;
            sum += a;
        }
        cout << (((n*x)-sum) < 1 ? 0 : ((n*x)-sum)) << endl;
    }
}