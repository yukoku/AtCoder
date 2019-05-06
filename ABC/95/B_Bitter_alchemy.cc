#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N,X;
    cin >> N >> X;
    int m[1010];
    for(int i = 0; i < N; ++i) cin >> m[i];
    int minel = *min_element(m, m+N);
    int cnt = 0;
    int donut = 0;
    for(int i = 0; i < N; ++i){
        cnt++;
        donut += m[i];
    }
    while(donut <= X){
        cnt++;
        donut += minel;
    }

    cnt--;
    cout << cnt << endl;
    return 0;
}

