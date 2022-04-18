#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, x, one=0, two=0, ans=0; vector<ll> v;
        cin >> n;
        for (int i=0; i<n; ++i) {
            cin >> x;
            if (x==1)
                one++;
            else if (x==2)
                two++;
            v.push_back(x);    
        }
        for (int i=0; i<v.size(); ++i) {
            if (v[i]==1) {
                ans += v.size()-(i+1);
                one--;
            }
            else ans += one;
        }
        two--;
        ans += (two*(two+1))/2;
        cout << ans << endl;
    }
}