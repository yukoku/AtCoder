#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    ll h,w;
    cin >> h >> w;

    if(h%3 == 0 || w%3 == 0){
        cout << 0 << endl;
        return 0;
    }
    ll smax = 0;
    ll smin = INFL;
    ll dif = INFL;
    ll h1,h2,h3;
    ll w1,w2,w3;
    for(ll i = 1; i < h; ++i){
        h1 = i;
        h2 = (h - h1) / 2;
        h3 = h - h1 - h2;
        w1 = w / 2;
        w2 = w - w1;
        ll sa = h1 * w;
        ll sb = h2 * w;
        ll sc = h3 * w;
        smax = max({sa, sb, sc});
        smin = min({sa, sb, sc});
        dif = min(dif, smax - smin);

        sa = h1 * w;
        sb = (h - h1) * w1;
        sc = (h - h1) * w2;
        smax = max({sa, sb, sc});
        smin = min({sa, sb, sc});
        dif = min(dif, smax - smin);
    }

    for(ll i = 1; i < w; ++i){
        w1 = i;
        w2 = (w - w1) / 2;
        w3 = w - w1 - w2;
        h1 = h / 2;
        h2 = h - h1;
        ll sa = w1 * h;
        ll sb = w2 * h;
        ll sc = w3 * h;
        smax = max({sa, sb, sc});
        smin = min({sa, sb, sc});
        dif = min(dif, smax - smin);

        sa = w1 * h;
        sb = (w-w1) * h1;
        sc = (w-w1) * h2;
        smax = max({sa, sb, sc});
        smin = min({sa, sb, sc});
        dif = min(dif, smax - smin);
    }

    cout << dif << endl;
    return 0;
}
