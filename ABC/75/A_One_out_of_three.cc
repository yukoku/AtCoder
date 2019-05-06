#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a == c) cout << b << endl;
    if(a == b) cout << c << endl;
    if(b == c) cout << a << endl;
    return 0;
}

