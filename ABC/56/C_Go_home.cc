#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int X;
    cin >> X;
    ll sum = 0;
    int cnt = 0;
    while(sum < X){
        ++cnt;
        sum += cnt;
    }
    
    cout << cnt << endl;
    return 0;
}

