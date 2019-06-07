#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int H,W;
    cin >> H >> W;
    vector<string> v(H);
    for(int i = 0; i < H; ++i) cin >> v[i];

    for(int i = 1; i <= 2 * H; ++i){
        cout << v[(i + 1) / 2 - 1] << endl;
    }
    return 0;
}

