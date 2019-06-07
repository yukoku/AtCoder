#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int a,b;
    string op;
    cin >> a >> op >> b;
    if(op == "+"){
        cout << a + b << endl;
    }else{
        cout << a - b << endl;
    }
    return 0;
}

