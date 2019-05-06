#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    int N,K;
    cin >> N >> K;
    int x[100];
    for(int i = 0; i < N; ++i) cin >> x[i];
    int dist = 0;
    for(int i = 0; i < N; ++i){
        dist += 2*min(abs(K-x[i]), x[i]);
    }
    cout << dist << endl;
    return 0;
}

