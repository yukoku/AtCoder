#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int h,w;
    cin >> h >> w;
    char s[50][50];
    for(int i = 0; i < h; ++i) for(int j = 0; j < w; ++j) cin >> s[i][j];
    if(h == 1 && w == 1){
        cout << "No" << endl;
        return 0;
    }

    bool ans[50][50];
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            if(s[i][j] == '#')
                ans[i][j] = false;
            else
                ans[i][j] = true;
        }
    }

    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            if(j!=0 && s[i][j] == '#' && s[i][j-1] == '#'){
                ans[i][j] = true;
                ans[i][j-1] = true;
            }
        }
    }
    for(int i = 0; i < w; ++i){
        for(int j = 0; j < h; ++j){
            if(j!=0 && s[j][i] == '#' && s[j-1][i] == '#'){
                ans[j][i] = true;
                ans[j-1][i] = true;
            }
        }
    }

    string answer = "Yes";
    for(int i = 0; i < h; ++i) for(int j = 0; j < w; ++j) if(ans[i][j] == false){answer = "No"; break;}
    cout << answer << endl;

    return 0;
}

