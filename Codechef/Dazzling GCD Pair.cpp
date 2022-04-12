#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int x, int y, int a, int b) {
    if (x>=a && y<=b && __gcd(x,y)>1)
        return true;
    else return false;    
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin >> a >> b;
        
        if (check(a, a+2, a, b))
            cout << a << " " << a+2 << endl;
        else if (check(a, a+3, a, b))
            cout << a << " " << a+3 << endl;
        else if (check(a+1, a+3, a, b))
            cout << a+1 << " " << a+3 << endl;
        else cout << -1 << endl;    
    }
}