#include <bits/stdc++.h>
#define integer long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

signed main() {
    IOS;

    integer n, k, itr1 = 0, itr2 = 0, product = 1, answer = 0;
    cin>>n>>k;
    integer nums[n];

    for (integer i = 0; i < n; i++) {
        cin>>nums[i];
    }
    while (itr1 < n) {
        product *= nums[itr1];

        while (itr2 < itr1 && product >= k) {
            product /= nums[itr2];
            itr2++;
        }
        answer += itr1 -itr2 + 1;
        itr1++;
    }
    cout<<answer<<'\n';
    

    return 0;

}