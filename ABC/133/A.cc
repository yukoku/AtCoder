#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    cout << min(a * n, b) << endl;
    return 0;
}

