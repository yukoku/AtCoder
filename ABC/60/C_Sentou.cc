#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N,T;
    cin >> N >> T;
    int t[200000];
    for(int i = 0; i < N; ++i) cin >> t[i];
    
    ll sum = 0;
    for(int i = 0; i < N-1; ++i){
        sum += min(t[i+1] - t[i], T);
    }
    sum += T;
    cout << sum << endl;
    return 0;
}

