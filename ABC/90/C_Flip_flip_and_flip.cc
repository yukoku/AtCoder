#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;
int main()
{
    long long N, M;
    cin >> N >> M;

    if(N == 1 && M == 1){
        cout << 1 << endl;
        return 0;
    }
    else if(N == 1){
        cout << M - 2 << endl;
        return 0;
    }
    else if(M == 1){
        cout << N - 2 << endl;
        return 0;
    }

    cout << (N-2) * (M-2) << endl;
    return 0;
}

