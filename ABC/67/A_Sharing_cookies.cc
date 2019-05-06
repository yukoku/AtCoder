#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int A,B;
    cin >> A >> B;
    if(A%3 == 0 || B%3 == 0 || (A+B)%3 == 0)
        cout << "Possible" << endl;
    else
        cout << "Impossible" << endl;

    return 0;
}

