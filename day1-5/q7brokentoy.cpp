#include <bits/stdc++.h>
#define integer long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

signed main() {
    IOS;
    integer n, m, k, answer;
    cin>>n>>m>>k;

    answer = m + k - 1;

    if (answer > n) {
        answer = answer%n;
    }
    cout<<answer<<'\n';
    

    return 0;

}