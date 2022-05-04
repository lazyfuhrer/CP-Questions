#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        double n, val, x; vector<double> v; double multi=0, maxi;
        cin >> n >> x;
        for (int i=0; i<n; ++i) {
            cin >> val;
            v.push_back(val);
        }
        for (int i=0; i<n; ++i) {
            multi += ceil(v[i]/x);
            
            if (i==0) {
                maxi = v[i];
                continue;
            }
            maxi = max(v[i], maxi);
        }
        cout << ((maxi<multi) ? maxi : multi) << endl;
    }
}
