#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    int N;
    cin >> N;
    int a[300][300];
    for(int i = 0; i < N; ++i) for(int j = 0; j < N; ++j) cin >> a[i][j];

    ll minl = 0;
    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            minl += a[i][j];
            for(int k = 0; k < N; ++k){
                if(k == i || k == j) continue;
                if(a[i][j] > a[i][k] + a[k][j]){
                    cout << -1 << endl;
                    return 0;
                }else if(a[i][j] == a[i][k] + a[k][j]){
                    minl -= a[i][j];
                    break;
                }
            }
        }
    }
    cout << minl << endl;
    return 0;
}

