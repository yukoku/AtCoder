#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    int x[200000];
    for(int i = 0; i < N; ++i) cin >> x[i];
    vector<pair<int, int>> v;
    v.reserve(N);
    for(int i = 0; i < N; ++i) v.push_back(make_pair(x[i], i));

    int y[200000];
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) -> int {return a.first < b.first;});
    int mid_right = v[N/2].first;
    int mid_left = v[(N-1)/2].first;
    for(int i = 0; i < N; ++i){
        if(v[i].first >= mid_right)
            y[v[i].second] = mid_left;
        else
            y[v[i].second] = mid_right;
    }
    for(int i = 0; i < N; ++i)
        cout << y[i] << endl;

    return 0;
}

