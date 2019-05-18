#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    string a,b;
    cin >> a >> b;
    string ans;
    if(a.size() > b.size()){
        ans = "GREATER";
    }else if(a.size() < b.size()){
        ans = "LESS";
    }else{
        if(a > b)
            ans = "GREATER";
        else if(a < b)
            ans = "LESS";
        else
            ans = "EQUAL";
    }
    cout << ans << endl;
    return 0;
}

