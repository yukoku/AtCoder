#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a+b>=10)
        cout << "error" << endl;
    else
        cout << a+b << endl;

    return 0;
}

