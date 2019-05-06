#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> a(M);
    vector<int> b(M);
    for(int i = 0; i < M; ++i) cin >> a[i] >> b[i];
    
    for(int i = 1; i <= N; ++i){
        cout << count(a.begin(), a.end(), i) + count(b.begin(), b.end(), i) << endl;
    }
    return 0;
}

