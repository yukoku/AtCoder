#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> dp(N+1, 2E9);

    dp[0] = 0;
    for(int i = 1; i <= N; ++i){
        int power = 1;
        while(power <= i){
            dp[i] = min(dp[i], dp[i-power] + 1);
            power *= 6;
        }
    }

    for(int i = 1; i <= N; ++i){
        int power = 1;
        while(power <= i){
            dp[i] = min(dp[i], dp[i-power] + 1);
            power *= 9;
        }
    }

    cout << dp[N] << endl;

    return 0;
}

