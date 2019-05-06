#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int A,B,C,X;
    cin >> A >> B >> C >> X;
    int cnt = 0;

    for(int i = 0; i <= A; ++i){
        for(int j = 0; j <= B; ++j){
            for(int k = 0; k <= C; ++k){
                if(500*i + 100*j + 50*k == X)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

