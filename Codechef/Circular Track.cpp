#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a,b,m;
        cin >> a >> b >> m;
        int val = abs(a-b);
        if (val < m-val)
            cout << val << endl;
        else cout << m-val << endl;    
    } 
}
