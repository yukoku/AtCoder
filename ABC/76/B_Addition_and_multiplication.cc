#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    int N,K;
    cin >> N >> K;
    int ans = 1;
    for(int i = 0; i < N; ++i){
        if(ans+K < ans*2)
            ans+=K;
        else
            ans*=2;
    }
    cout << ans << endl;
    return 0;
}

