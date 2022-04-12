#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n%4==3 || n%4==2)
            cout << 3 << endl;
        else if (n%4==0)
            cout << n+3 << endl;
        else cout << n << endl;    
    }
}
