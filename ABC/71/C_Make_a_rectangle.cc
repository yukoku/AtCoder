#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; ++i) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    ll edge1 = 0;
    ll edge2 = 0;
    int tmp = 0;
    for(auto itr = v.begin(); itr != v.end(); ++itr){
        if(tmp == *itr){
            if(edge1 != 0){
                edge2 = *itr;
                break;
            }else{
                edge1 = *itr;
                tmp = 0;
                continue;
            }
        }
        tmp = *itr;
    }
    cout << edge1*edge2 << endl;

    return 0;
}

