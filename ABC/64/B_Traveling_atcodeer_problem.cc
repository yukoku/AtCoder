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
    int a[100];
    for(int i = 0; i < N; ++i) cin >> a[i];
    sort(a, a+N);
    int ans = 0;
    for(int i = 1; i < N; ++i){
        ans += abs(a[i] - a[i-1]);
    }
    cout << ans << endl;
    return 0;
}

