#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;



int main()
{
    int N, M;
    cin >> N >> M;
    pair<int, int> p[50];
    bool d[51];
    for(int i = 0; i < M; ++i) cin >> p[i].first >> p[i].second;
    for(int i = 0; i < N+1; ++i) d[i] = false;

    int cnt = 0;
    for(int i = 0; i < M; ++i){
        queue<pair<int, int>> q;
        q.push(p[i]);
        while(q.empty() == false){
            auto node = q.front();
            q.pop();
            for(int j = 0; j < M; ++j){
                if(j == (i+1)%M) continue;
                if(node == p[j]) continue;
                if(node.second == p[j].first){
                    if(d[p[j].first] == true) continue;
                    q.push(p[j]);
                }
                if(node.first == p[j].second){
                    if(d[p[j].second] == true) continue;
                    q.push(p[j]);
                }
                if(node.second == p[j].second){
                    if(d[p[j].second] == true) continue;
                    q.push(p[j]);
                }
                if(node.first == p[j].first){
                    if(d[p[j].first] == true) continue;
                    q.push(p[j]);
                }
            }
            d[node.first] = true;
            d[node.second] = true;
        }
        bool isBridge = false;
        for(int j = 1; j <= N; ++j){
            if(d[j] == false){
                isBridge = true;
            }else{
                d[j] = false;
            }
        }
        if(isBridge) cnt++;
    }
    cout << cnt << endl;
    return 0;
}

