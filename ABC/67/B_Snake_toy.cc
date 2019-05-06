#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N,K;
    cin >> N >> K;
    int l[50];
    for(int i = 0; i < N; ++i) cin >> l[i];
    sort(l, l+N, greater<int>());
    int ans = 0;
    for(int i = 0; i < K; ++i){
        ans += l[i];
    }
    cout << ans << endl;
    return 0;
}

