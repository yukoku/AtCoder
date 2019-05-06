#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int cnt[100001];

int main()
{
    int N;
    cin >> N;
    int a[100000];
    for(int i = 0; i < N; ++i) cin >> a[i];
    for(int i = 0; i < N; ++i) cnt[a[i]] += 1;
    
    int ans = 0;
    for(int i = 0; i < 100000-2; ++i){
        int tmp = cnt[i] + cnt[i+1] + cnt[i+2];
        ans = max(ans,tmp);
    }
    cout << ans << endl;
    return 0;
}

