#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N,D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));

    for(int i = 0; i < N; ++i) for(int j = 0; j < D; ++j) cin >> X[i][j];

    int cnt = 0;
    for(int i = 0; i < N - 1; ++i){
        for(int k = i+1; k < N; ++k){
            int distance = 0;
            for(int j = 0; j < D; ++j){
                distance += pow(X[i][j] - X[k][j], 2);
            }
            int a = static_cast<int>(sqrt(distance));
            if(distance == a * a) cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

