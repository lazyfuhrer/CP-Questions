#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x, count=0;
        cin >> n;
        
        for (int i=0; i<n; ++i) {
            cin >> x;
            if (x>=1000)
                count++;
        }
        cout << count << endl;
    }
}
