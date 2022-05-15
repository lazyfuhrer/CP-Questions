#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n ,m, x; vector<ll> ans; //bool same = true;
        cin >> n >> m;
        
        for (int i=0; i<n; ++i) {
            cin >> x;
            ans.push_back(x);
        }
        
        sort(ans.begin(), ans.end());
        
        ll maxi = ans[n-1], second_maxi;
        
            
        for (int i=n-1; i>=0; --i) {
            if (ans[i]<maxi) {
                second_maxi = ans[i];
                break;
            }    
        }
        
        cout << max(maxi*2, second_maxi+maxi+((second_maxi-maxi)%m)+m) << endl;
    }
}
