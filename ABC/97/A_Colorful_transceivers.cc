#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if((abs(a-b) <= d && abs(b-c) <= d) || abs(a-c) <= d)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

