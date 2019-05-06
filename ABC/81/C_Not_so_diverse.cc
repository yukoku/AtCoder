#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

struct second_order{
    bool operator()(const pair<int, int>& x,const pair<int, int>& y) const
    {
        return x.second > y.second;
    }
};

int main()
{
    int N,K;
    cin >> N >> K;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];
    map<int, int> m;
    for(int i = 0; i < N; ++i){
        m[a[i]] += 1;
    }
    int cnt = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, second_order> pq;
    for(auto p : m){
        pq.push(p);
    }
    while(pq.size() > K){
        cnt += pq.top().second;
        pq.pop();
    }
    cout << cnt << endl;
    
    return 0;
}

