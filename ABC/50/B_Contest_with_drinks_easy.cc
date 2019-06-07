#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N;
    cin >> N;
    int T[100000];
    int total = 0;
    for(int i = 0; i < N; ++i){
        cin >> T[i];
        total += T[i];
    }
    int M;
    cin >> M;
    vector<P> px(M);
    for(int i = 0; i < M; ++i) cin >> get<0>(px[i]) >> get<1>(px[i]);

    for(int i = 0; i < M; ++i){
        cout << total - T[get<0>(px[i]) - 1] + get<1>(px[i]) << endl;;
    }

    return 0;
}

