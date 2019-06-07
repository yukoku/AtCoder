#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N,K;
    cin >> N >> K;
    ll pattern = K * pow(K-1, N-1);
    cout << pattern << endl;
    return 0;
}

