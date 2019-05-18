#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    char a,b;
    cin >> a >> b;
    char ans;
    if(a == 'H'){
        if(b == 'H'){
            ans = 'H';
        }else{
            ans = 'D';
        }
    }else{
        if(b == 'H'){
            ans = 'D';
        }else{
            ans = 'H';
        }
    }
    cout << ans << endl;
    return 0;
}

