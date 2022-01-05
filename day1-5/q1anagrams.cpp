#include <bits/stdc++.h>
#define integer long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

signed main() {
    IOS;

    integer n;
    cin>>n;
    string input, sortedinput;
    vector<string> words;
    unordered_map <string, vector<string>> sortedkeymap;

    for (integer i = 0; i < n; i++) {
        cin>>input;
        sortedinput = input;
        sort(sortedinput.begin(), sortedinput.end());
        sortedkeymap[sortedinput].push_back(input);
    }
    for (auto itr : sortedkeymap) {
        for (auto itr2 : itr.second) {
            cout<<itr2<<" ";
        }
        cout<<'\n';
    }
    

    return 0;

}