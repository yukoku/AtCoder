#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int memo[100000];

int main()
{
    int N;
    cin >> N;
    vector<P> vx(N);
    vector<P> vy(N);
    for(int i = 0; i < N; ++i){
        memo[i] = INF + 1;
        cin >> vx[i].first;
        vx[i].second = i;
        cin >> vy[i].first;
        vy[i].second = i;
    }
    sort(vx.begin(), vx.end(), [](P x, P y){return x.first < y.first;});
    sort(vy.begin(), vy.end(), [](P x, P y){return x.first < y.first;});

    memo[vy[0].second] = vy[1].first - vy[0].first;
    memo[vy[1].second] = vy[1].first - vy[0].first;
    memo[vx[0].second] = vx[1].first - vx[0].first;
    memo[vx[1].second] = vx[1].first - vx[0].first;

    for(int i = 1; i < N-1; ++i){
        memo[vy[i].second] = min(vy[i+1].first - vy[i].first, memo[vy[i].second]);
        memo[vy[i+1].second] = min(vy[i+1].first - vy[i].first, memo[vy[i+1].second]); 
        memo[vx[i].second] = min(vx[i+1].first - vx[i].first, memo[vx[i].second]);
        memo[vx[i+1].second] = min(vx[i+1].first - vx[i].first, memo[vx[i+1].second]); 
    }

    ll ans = 0;
    for(int i = 0; i < N; ++i){
        ans += memo[i];
    }
    cout << ans << endl;
    return 0;
}

