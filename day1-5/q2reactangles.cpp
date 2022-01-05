#include <bits/stdc++.h>
#define integer long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

signed main() {
    IOS;

    integer l1x, l1y, r1x, r1y, l2x, l2y, r2x, r2y;
    cin>>l1x>>l1y>>r1x>>r1y>>l2x>>l2y>>r2x>>r2y;

    if (r1x >= l2x) {
        if (l1y >= r2y) {
            cout<<"1"<<'\n';
            return 0;
        }
        else {
            cout<<"0"<<'\n';
            return 0;
        }
    }
    else{
        cout<<"0"<<'\n';
        return 0;
    }

}