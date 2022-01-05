#include <bits/stdc++.h>
#define integer long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

signed main() {
    IOS;
    integer n;
    cin>>n;

    set <integer> series;
    series.insert(1);
    n--;
    while (n--) {
        auto itr = series.begin();
        integer x = *itr;
        series.erase(itr);
        series.insert(x*2);
        series.insert(x*3);
        series.insert(x*5);
    }
    cout<<*series.begin()<<'\n';

    return 0;

}