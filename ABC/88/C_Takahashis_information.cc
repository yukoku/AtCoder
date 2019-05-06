#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int c[3][3];
    for(int i = 0; i < 3; ++i) for(int j = 0; j < 3; ++j) cin >> c[i][j];

    string ans = "Yes";
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(c[i][j] - c[i][(j+1)%3] != c[(i+1)%3][j] - c[(i+1)%3][(j+1)%3])
                ans = "No";
        }
    }
    for(int j = 0; j < 3; ++j){
        for(int i = 0; i < 3; ++i){
            if(c[i][j] - c[(i+1)%3][j] != c[i][(j+1)%3] - c[(i+1)%3][(j+1)%3])
                ans = "No";
        }
    }
    cout << ans << endl;
    
    return 0;
}

