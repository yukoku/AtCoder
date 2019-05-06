#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N,M;
    string s[100];
    string t[100];
    cin >> N;
    for(int i = 0; i < N; ++i) cin >> s[i];
    cin >> M;
    for(int i = 0; i < M; ++i) cin >> t[i];
    map<string, int> m;
    for(int i = 0; i < N; ++i){
        m[s[i]] += 1;
    }
    for(int i = 0; i < M; ++i){
        m[t[i]] -= 1;
    }
    int mm = 0;
    for(auto itr = m.begin(); itr != m.end(); ++itr){
        mm = max(mm, itr->second);
    }

    cout << mm << endl;
    return 0;
}

