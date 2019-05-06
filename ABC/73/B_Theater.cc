#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N;
    cin >> N;
    P sit[100000];
    for(int i = 0; i < N; ++i) cin >> sit[i].first >> sit[i].second;
    int ans = 0;
    for(int i = 0; i < N; ++i){
        ans += sit[i].second - sit[i].first + 1;
    }
    cout << ans << endl;
    return 0;
}

