#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    ll a,b,x;
    cin >> a >> b >> x;

    auto f = [&x](ll num) -> ll
    {
        if(num < 0) return 0;
        return num / x + 1;

    };

    cout << f(b) - f(a-1) << endl;
    return 0;
}

