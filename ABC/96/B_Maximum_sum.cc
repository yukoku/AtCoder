#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int a,b,c,k;
    cin >> a >> b >> c >> k;

    int d = max({a,b,c});
    cout << d * (pow(2, k) -1) + (a+b+c) << endl;

    return 0;
}

