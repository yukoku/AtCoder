#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int K,S;
    cin >> K >> S;
    ll cnt = 0;
    for(int i = 0; i <= K; ++i){
        for(int j = 0; j <= K; ++j){
            if(i+j > S) break;
            if(i+j+K >= S) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

