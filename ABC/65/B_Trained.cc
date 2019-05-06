#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

bool memo[100001];

int main()
{
    int N;
    cin >> N;
    int a[100001];
    for(int i = 1; i <= N; ++i) cin >> a[i];
    int index = 1;
    int cnt = 1;
    memo[1] = true;

    while(true){
        if(memo[a[index]] == true){
            cnt = -1;
            break;
        }
        if(a[index] == 2)
            break;
        memo[a[index]] = true;
        index = a[index];
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}

