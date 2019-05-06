#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[2][100];
    for(int i = 0; i < 2; ++i) for(int j = 0; j < N; ++j) cin >> a[i][j];

    int memo[2][100];
    memo[0][0] = a[0][0];
    memo[1][0] = a[1][0] + a[0][0];
    for(int j = 1; j < N; ++j){
        for(int i = 0; i < 2; ++i){
            if(i == 0)
                memo[0][j] = memo[0][j-1] + a[0][j];
            else
                memo[1][j] = max(memo[0][j], memo[1][j-1]) + a[1][j];
        }
    }
    cout << memo[1][N-1] << endl;

    return 0;
}

