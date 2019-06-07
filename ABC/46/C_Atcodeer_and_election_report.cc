#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N;
    cin >> N;
    vector<P> ta(N);
    for(int i = 0; i < N; ++i) cin >> get<0>(ta[i]) >> get<1>(ta[i]);
    ll cnt = get<0>(ta[0]) + get<1>(ta[0]);

    for(int i = 1; i < N; ++i){
        int tasum = get<0>(ta[i]) + get<1>(ta[i]);
        cnt += (tasum - cnt % (tasum));
    }
    cout << cnt << endl;
    return 0;
}

