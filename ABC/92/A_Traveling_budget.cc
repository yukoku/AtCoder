#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << min(A,B) + min(C,D) << endl;
    return 0;
}

