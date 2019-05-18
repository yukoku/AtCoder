#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    ll x;
    cin >> x;
    ll cnt = (x / 11) * 2;
    int tmp = x % 11;

    if(tmp == 0);
    else if(tmp <= 6)  cnt++;
    else cnt += 2;

    cout << cnt << endl;
    return 0;
}

