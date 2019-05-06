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
    int ans = 1;
    int x = 0;
    int mcnt = 0;
    for(int i = N; i > x; --i){
        int num = i;
        int cnt = 0;
        while(num % 2 == 0){
            num /= 2;
            x = num;
            cnt++;
        }
        if(mcnt < cnt){
            ans = i;
            mcnt = max(cnt, mcnt);
        }
    }

    cout << ans << endl;
    return 0;
}

