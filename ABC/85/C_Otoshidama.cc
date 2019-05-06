#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N,Y;
    cin >> N >> Y;
    for(int i = N; i >= 0; --i){
        for(int j = 0; j <= N-i; ++j){
            for(int k = N-j-i; k <= N-j-i; ++k){
                if(10000*i+5000*j+1000*k == Y){
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}

