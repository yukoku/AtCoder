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
    int a[100000];
    for(int i = 0; i < N; ++i) cin >> a[i];
    int cnt4 = 0;
    int cnt2 = 0;
    for(int i = 0; i < N; ++i){
        int tmp = a[i] % 4;
        if(tmp == 0)
            cnt4++;
        else if(tmp == 2)
            cnt2++;
    }

    if(N%2 == 1) N--;

    if(N <= cnt4*2 + cnt2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

