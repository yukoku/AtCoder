#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    ll N,K;
    cin >> N >> K;
    vector<ll> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    ll cnt = 0;
    int right_index = 0;
    ll partial_sum_mem = 0;
    for(int left = 0; left < N; ++left){
        ll partial_sum = partial_sum_mem;
        for(int right = right_index; right < N; ++right){
            partial_sum += a[right];
            if(partial_sum >= K){
                cnt += a.size() - right;
                right_index = right;
                partial_sum_mem = partial_sum - a[left] - a[right];
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

