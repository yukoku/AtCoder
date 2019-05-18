#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    string o, e;
    cin >> o >> e;
    for(int i = 0; i < o.size(); ++i){
        if(i >= e.size()){
            cout << o[i] << endl;
            return 0;
        }
        cout << o[i] << e[i];
    }
    cout << endl;

    return 0;
}

