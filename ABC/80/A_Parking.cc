#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    int N,A,B;
    cin >> N >> A >> B;
    if(N*A < B) cout << N*A << endl;
    else cout << B << endl;
    return 0;
}

