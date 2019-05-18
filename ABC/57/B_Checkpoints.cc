#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<ll, ll>;
using iarr = valarray<int>;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<P> ab(N),cd(M);
    for(int i = 0; i < N; ++i) cin >> get<0>(ab[i]) >> get<1>(ab[i]);
    for(int i = 0; i < M; ++i) cin >> get<0>(cd[i]) >> get<1>(cd[i]);

    for(int i = 0; i < N; ++i){
        ll min_dist = INFL;
        ll x = get<0>(ab[i]);
        ll y = get<1>(ab[i]);
        int index = -1;
        for(int j = 0; j < M; ++j){
            ll now = llabs(get<0>(cd[j]) - x) + llabs(get<1>(cd[j]) - y);
            if(min_dist > now){
                min_dist = now;
                index = j+1;
            }
        }
        cout << index << endl;
    }
    return 0;
}

