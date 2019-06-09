#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

class UnionFind{
public:
    UnionFind(int N)
     : v(N)
    {
        for(int i = 0; i < N; ++i) v[i] = i;
    }

    int root(int x)
    {
        if(v[x] == x) return x;
        return v[x] = root(v[x]);
    }

    void unite(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        v[rx] = ry;
    }

    bool same(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
private:
    vector<int> v;
};

int main()
{
    int N = 100;
    UnionFind tree(N);
    return 0;
}

