#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int w,x,y,z;
        cin >> w >> x >> y >> z;
        
        if (w+(y*z) > x)
            cout << "overflow" << endl;
        else if (w+(y*z) == x)
            cout << "filled" << endl;
        else cout << "unfilled" << endl;    
    }
}
