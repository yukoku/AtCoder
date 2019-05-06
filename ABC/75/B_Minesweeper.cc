#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    int h,w;
    cin >> h >> w;
    char a[52][52];
    int b[52][52];
    for(int i = 1; i <= h; ++i) for(int j = 1; j <= w; ++j){ cin >> a[i][j]; b[i][j] = 0;}

    for(int i = 1; i <= h; ++i){
        for(int j = 1; j <= w; ++j){
            if(a[i][j] == '#'){
                for(int k = -1; k <= 1; ++k){
                    for(int l = -1; l <= 1; ++l){
                        b[i+k][j+l]++;
                    }
                }
            }
        }
    }
    for(int i = 1; i <= h; ++i){
        for(int j = 1; j <= w; ++j){
            if(a[i][j] == '#') cout << '#';
            else cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}

