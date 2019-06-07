#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && b == c){
        cout << 1 << endl;
    }else if(a == b || b == c || c == a){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }

    return 0;
}

