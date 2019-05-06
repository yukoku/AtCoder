#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int ans = min(B,D) - max(A,C); 
    if(ans <= 0)
        cout << 0 << endl;
    else
        cout << ans << endl;

    return 0;
}

