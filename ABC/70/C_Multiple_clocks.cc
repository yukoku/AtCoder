#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

ll GCD(ll a, ll b){
    if(a % b == 0)
        return b;
    return GCD(b, a % b);
}

ll LCM(ll a, ll b){
    return a / GCD(a, b) * b;
}

int main()
{
    int N;
    cin >> N;
    ll t[100];
    for(int i = 0; i < N; ++i) cin >> t[i];
    ll ans = t[0];
    for(int i = 1; i < N; ++i){
        ans = LCM(ans, t[i]);
    }
    cout << ans << endl;
    return 0;
}

