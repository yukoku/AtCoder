#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

bool color[8];

int main()
{
    int N;
    cin >> N;
    int a[100];
    for(int i = 0; i < N; ++i) cin >> a[i];
    int all_type = 0;
    int color_index = -1;
    for(int i = 0; i < N; ++i){
        if(a[i] <= 399){
            color_index = 0;
        }else if(a[i] >= 400 && a[i] <= 799){
            color_index = 1;
        }else if(a[i] >= 800 && a[i] <= 1199){
            color_index = 2;
        }else if(a[i] >= 1200 && a[i] <= 1599){
            color_index = 3;
        }else if(a[i] >= 1600 && a[i] <= 1999){
            color_index = 4;
        }else if(a[i] >= 2000 && a[i] <= 2399){
            color_index = 5;
        }else if(a[i] >= 2400 && a[i] <= 2799){
            color_index = 6;
        }else if(a[i] >= 2800 && a[i] <= 3199){
            color_index = 7;
        }else{
            all_type++;
        }
        color[color_index] = true;
    }
    int mincnt = 0;
    int maxcnt = 0;
    for(int i = 0; i < 8; ++i){
        if(color[i])
            mincnt++;
    }
    if(mincnt == 0){
        cout << 1 << " " << all_type << endl;
        return 0;
    }
    maxcnt = mincnt+all_type;
    cout << mincnt << " " << maxcnt << endl;
    return 0;
}

