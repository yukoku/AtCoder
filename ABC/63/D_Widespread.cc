#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N,A,B;
    cin >> N >> A >> B;
    int h[100000];
    ll total = 0;
    for(int i = 0; i < N; ++i){
        cin >> h[i];
        total += h[i];
    }

    return 0;
}

