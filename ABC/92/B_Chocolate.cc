#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N,D,X;
    cin >> N >> D >> X;
    int A[110];
    for(int i = 0; i < N; ++i) cin >> A[i];

    int cnt = 0;
    for(int i = 0; i < N; ++i){
        int j = 0;
        while(A[i] * j + 1 <= D){
            cnt++;
            j++;
        }
    }
    cnt += X;
    cout << cnt << endl;
    return 0;
}

