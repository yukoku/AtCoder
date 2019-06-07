#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N, x;
    cin >> N >> x;

    vector<int> v(N);
    for(int i = 0; i < N; ++i) cin >> v[i];

    ll cnt = 0;
    ll t = v[0] + v[1];
    if(t > x){
        ll s = t - x;
        if(v[1] - s < 0){
            v[1] = 0;
        }else{
            v[1] -= s;
        }
        cnt += s;
    }

    ll pre = v[1];
    for(int i = 2; i < N; ++i){
        ll total = pre + v[i];
        if(total > x){
            v[i] -= total - x;
            cnt += total - x;
        }
        pre = v[i];
    }
    cout << cnt << endl;
    return 0;
}

