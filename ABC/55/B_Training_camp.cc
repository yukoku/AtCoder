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
    ll pw = 1;
    for(int i = 1; i <= N; ++i){
        pw = (pw * i) % 1000000007;
    }
    cout << pw << endl;
    return 0;
}

