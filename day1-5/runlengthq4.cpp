#include <bits/stdc++.h>
#define integer long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

signed main() {
    IOS;
    integer flag = 0, count = 1;
    char c, currentchar;
    string s;
    cin>>s;

    for (auto &c : s) {
        if (flag == 1) {
            if (c == currentchar) {
                ++count;
            }
            else {
                cout<<currentchar<<count;
                currentchar = c;
                count = 1;
            }
        }
        if (flag == 0) {
            currentchar = c;
            flag = 1;
        }
    }
    cout<<currentchar<<count;
    cout<<'\n';
    

    return 0;

}