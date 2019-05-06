#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

ll func(int n){
    if(n == 0) return 1;
    return n*func(n-1)%1000000007;
}

int main()
{
    int N,M;
    cin >> N >> M;
    if(abs(N-M) > 1){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    if(N==M){
        ans = func(N)*func(M)*2%1000000007;
    }else{
        ans = func(N)*func(M)%1000000007;
    }
    cout << ans << endl;


    return 0;
}

