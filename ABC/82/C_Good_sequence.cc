#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    int N;
    cin >> N;
    int a[100000];
    for(int i = 0; i < N; ++i) cin >> a[i];
    unordered_map<int, int> m;
    for(int i = 0; i < N; ++i){
        m[a[i]] += 1;
    }
    int cnt = 0;
    for(auto itr = m.begin(); itr != m.end(); ++itr){
        if(itr->first < itr->second){
            cnt += itr->second - itr->first;
        }else if(itr->first > itr->second){
            cnt += itr->second;
        }
    }
    cout << cnt << endl;
    return 0;
}

