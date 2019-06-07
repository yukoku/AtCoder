#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N;
    string s;
    cin >> N >> s;

    int x = 0;
    int ans = 0;
    for(auto itr = s.begin(); itr != s.end(); ++itr){
        if(*itr == 'I'){
            x++;
        }else{
            x--;
        }
        ans = max(x, ans);
    }
    cout << ans << endl;
    return 0;
}

