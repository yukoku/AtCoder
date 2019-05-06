#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string ans;
    if(a + b > c + d) ans = "Left";
    else if(a + b < c + d) ans = "Right";
    else ans = "Balanced";

    cout << ans << endl;
    return 0;
}

