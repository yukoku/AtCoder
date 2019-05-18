#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N, K;
    cin >> N >> K;
    int a[5000];
    for(int i = 0; i < N; ++i) cin >> a[i];

    sort(a, a+N);

    int cnt = 0;
    for(int i = 0; i < N; ++i){
        ll sum = 0;
        for(int j = i; j < N; ++j){
            if(sum >= K && sum <= K + a[i]){
                cnt++;
                break;
            }
        }
    }

    cout << N - cnt << endl;
    return 0;
}

