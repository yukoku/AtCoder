#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    int N,M;
    cin >> N >> M;

    int t = (N-M)*100 + M*1900;
    int pre_x = -1;
    int x = 0;
    int cnt = 0;
    while(pre_x != x){
        cnt++;
        pre_x = x;
        double partial = 0;
        for(int i = 0; i < cnt; ++i){
            partial += 1 - pow(2,-M*i);
        }
        x += t*cnt*(partial+pow(2,-M*cnt));
    }
    cout << x << endl;
    return 0;
}

