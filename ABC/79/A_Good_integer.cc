#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;
    if((s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3]))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

