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
    regex re("A.+Z");
    smatch match;
    if(regex_search(s, match, re)){
        cout << match.str().size() << endl;
    }
    return 0;
}

