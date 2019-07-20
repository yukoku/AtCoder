#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    ll L,R;
    cin >> L >> R;

    if(R - L >= 2019 || L == 0){
        cout << 0 << endl;
        return 0;
    }

    ll minval = INF;
    for(ll i = L; i < R; ++i){
        for(ll j = i+1; j <= R; ++j){
            minval = min(minval, i*j%2019);
        }
    }
    cout << minval << endl;

    return 0;
}

