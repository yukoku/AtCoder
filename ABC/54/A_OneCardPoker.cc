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
    cin >> a >> b;
    if(a == b){
        cout << "Draw" << endl;
        return 0;
    }

    if(a == 1){
        cout << "Alice" << endl;
    }else if(b == 1){
        cout << "Bob" << endl;
    }else if(a > b){
        cout << "Alice" << endl;
    }else{
        cout << "Bob" << endl;
    }
    return 0;
}

