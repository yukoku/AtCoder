#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int h,w;
    cin >> h >> w;
    char a[102][102];

    for(int i = 1; i <= h; ++i) for(int j = 1; j <= w; ++j) cin >> a[i][j]; 

    for(int i = 0; i <= h+1; ++i){
        for(int j = 0; j <= w+1; ++j){
            if(i == 0 || i == h+1 || j == 0 || j == w+1)
                cout << "#";
            else
                cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}

