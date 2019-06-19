#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    ll W,H,x,y;
    cin >> W >> H >> x >> y;
    
    if(W / 2 == x && H / 2 == y && W % 2 == 0 && H % 2 == 0)
        cout << W * H / 2.0 << " " << 1 << endl;
    else
        cout << W * H / 2.0 << " " << 0 << endl;

    return 0;
}

