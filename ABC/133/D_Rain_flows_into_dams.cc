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
    vector<int> a(N + 1);
    for(int i = 0; i < N; ++i) cin >> a[i];

    vector<int> ans(N);
    for(int i = 0; i < N; ++i){
        if(i % 2 != 0){
            ans[0] -= a[i];
        }else{
            ans[0] += a[i];
        }
    }
    cout << ans[0] << " ";
    for(int i = 0; i < N -2; ++i){
        ans[i+1] = 2 * (a[i] - ans[i] / 2);
        cout << ans[i+1] << " ";
    }
    cout << 2 * (a[N - 2] - ans[N - 2] / 2) << endl;

    return 0;
}

