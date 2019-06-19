#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> L(N);
    for(int i = 0; i < N; ++i) cin >> L[i];
    int cnt = 0;
    int pos = 0;
    for(auto l : L){
        if(pos > X) break;
        cnt++;
        pos += l;
    }
    if(cnt == L.size() && pos <= X) cnt++;

    cout << cnt << endl;

    return 0;
}

