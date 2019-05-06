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
    int s[100];
    int ans = 0;
    for(int i = 0; i < N; ++i){
        cin >> s[i];
        ans += s[i];
    }
    
    sort(s, s+N);
    for(int i = 0; i < N; ++i){
        if(ans%10 != 0){
            cout << ans << endl;
            return 0;
        }
        if(s[i] % 10 != 0){
            ans -= s[i];
        }
    }
    cout << 0 << endl;
    return 0;
}

