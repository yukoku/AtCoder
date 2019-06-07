#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    string s;
    cin >> s;
    char pre = s[0];
    int cnt = 0;

    for(int i = 1; i < s.size(); ++i){
        if(pre != s[i]){
            cnt++;
            pre = s[i];
        }
    }

    cout << cnt << endl;

    return 0;
}

