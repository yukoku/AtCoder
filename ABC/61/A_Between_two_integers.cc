#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(c >= a && c <= b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

