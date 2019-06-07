#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int W,H,N;
    cin >> W >> H >> N;
    vector<tuple<int, int, int>> v(N);
    for(int i = 0; i < N; ++i) cin >> get<0>(v[i]) >> get<1>(v[i]) >> get<2>(v[i]);

    P a(0,0),b(W, H);

    for(auto& t : v){
        switch(get<2>(t)){
        case 1:
            if(get<0>(a) < get<0>(t))
                get<0>(a) = get<0>(t);
            break;
        case 2:
            if(get<0>(b) > get<0>(t))
                get<0>(b) = get<0>(t);
            break;
        case 3:
            if(get<1>(a) < get<1>(t))
                get<1>(a) = get<1>(t);
            break;
        case 4:
            if(get<1>(b) > get<1>(t))
                get<1>(b) = get<1>(t);
            break;
        }
    }
    if(get<0>(b) - get<0>(a) > 0 && get<1>(b) - get<1>(a) > 0)
        cout << (get<0>(b) - get<0>(a)) * (get<1>(b) - get<1>(a)) << endl;
    else
        cout << 0 << endl;

    return 0;
}

