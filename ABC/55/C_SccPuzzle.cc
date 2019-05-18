#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    ll N, M;
    cin >> N >> M;
    ll cnt = 0;

    if(N * 2 > M){
        cout << M / 2 << endl;
        return 0;
    }

    cnt += N;
    M -= 2 * N;

    cnt += M / 4;
    cout << cnt << endl;
    return 0;
}

