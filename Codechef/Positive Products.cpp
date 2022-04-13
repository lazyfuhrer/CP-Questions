#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, x, ans=0, pos=-1, neg=-1;
        cin >> n;
        for (int i=0; i<n; ++i) {
            cin >> x;
            if (x>0)
                pos++;
            else if (x<0)
                neg++;
        }
        if (pos>0)
            ans += (pos*(pos+1)/2);
        if (neg>0)
            ans += (neg*(neg+1)/2);
        cout << ans << endl;    
    }
}