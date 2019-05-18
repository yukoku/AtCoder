#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    vector<ll> v(N);
    for(int i = 0; i < N; ++i) cin >> v[i];

    sort(v.begin(), v.end(), greater<ll>());

    double avg = accumulate(v.begin(), v.begin()+A, 0) / A;
    cout << avg << endl;

    ll min_sum_elem = *(v.begin() + A -1);
    ll min_elem_cnt = count(v.begin(), v.end(), min_sum_elem);
    ll min_not_sum_elem_cnt = count(v.begin() + A, v.end(), min_sum_elem);

    



    return 0;
}

