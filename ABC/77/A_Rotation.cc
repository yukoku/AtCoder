#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    string s,t;
    cin >> s >> t;
    string u(s.rbegin(), s.rend());
    if(u == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

