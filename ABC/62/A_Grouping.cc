#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int x,y;
    cin >> x >> y;
    set<int> g1 {1,3,5,7,8,10,12};
    set<int> g2 {4,6,9,11};
    set<int> g3 {2};

    if(g1.count(x) && g1.count(y)){
        cout << "Yes" << endl;
        return 0;
    }

    if(g2.count(x) && g2.count(y)){
        cout << "Yes" << endl;
        return 0;
    }
    if(g3.count(x) && g3.count(y)){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;

    return 0;
}

