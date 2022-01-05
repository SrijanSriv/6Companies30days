#include <bits/stdc++.h>
#define integer long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

signed main() {
    IOS;
    string str1, str2, strlarger, strsmaller;
    cin>>str1>>str2;
    integer answer;
    if (str1.length() < str2.length()) {
        answer = str1.length();
        strlarger = str2.substr(0, answer);
        strsmaller = str1;
    }
    else {
        answer = str2.length();
        strlarger = str1.substr(0, answer);
        strsmaller = str2;
    }

    while (strsmaller != strlarger) {
        answer--;
        strsmaller = strsmaller.substr(0, answer - 1);
        strlarger = strlarger.substr(0, answer - 1);
    }
    cout<<answer - 1<<'\n';
    

    return 0;

}