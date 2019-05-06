#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    ll N, K;
    cin >> N >> K;
    vector<P> v(N);
    for(int i = 0; i < N; ++i){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](P a, P b) -> bool {return a.first < b.first;});

    ll cnt = 0;
    int ans = 0;
    for(int i = 0; i < N; ++i){
        if(cnt >= K)
            break;
        cnt += v[i].second;
        ans = v[i].first;
    }
    cout << ans << endl;
    return 0;
}

