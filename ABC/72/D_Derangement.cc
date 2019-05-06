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
    int p[100002];
    for(int i = 1; i <= N; ++i) cin >> p[i];
    int ans = 0;
    for(int i = 1; i < N; ++i){
        if(p[i] == i)
        {
            ans++;
            swap(p[i], p[i+1]);
            if(p[i] == i){
                i++;
            }
        }
    }
    if(p[N] == N)
        ans++;
    cout << ans << endl;

    return 0;
}

