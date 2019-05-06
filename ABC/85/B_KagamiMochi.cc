#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    int d[110];
    for(int i = 0; i < N; ++i) cin >> d[i];

    sort(d, d+N, greater<int>());
    int cnt = 0;
    int pre = -1;
    for(int i = 0; i < N; ++i){
        if(pre != d[i]){
            pre = d[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

