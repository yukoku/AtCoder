#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    string s,t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());
    if(s < t) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

