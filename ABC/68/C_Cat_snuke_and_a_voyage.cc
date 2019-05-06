#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N, M;
    cin >> N >> M;
    int a[200000], b[200000];
    vector<P> v;
    map<int, int> m;
    for(int i = 0; i < M; ++i){
        cin >> a[i] >> b[i];
        if(a[i] == 1)
            v.push_back(make_pair(a[i], b[i]));
        if(b[i] == N)
            m[a[i]] = b[i];
    }
    for(auto itr = v.begin(); itr != v.end(); ++itr){
        if(m.count(itr->second)){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}

