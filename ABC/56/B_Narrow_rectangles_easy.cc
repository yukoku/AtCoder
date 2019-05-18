#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int W,a,b;
    cin >> W >> a >> b;
    if(a + W < b){
        cout << b - (a + W) << endl;
    }else if(a > b + W){
        cout << a - (b + W) << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}

