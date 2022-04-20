#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x,y,a,b, ct=0;
        cin >> x >> y >> a >> b;
        if (x!=a && x!=b)
            ct++;
        if (y!=a && y!=b)
            ct++;
        cout << ct << endl;    
    }
}