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
    int a[100000], b[100000];
    for(int i = 0; i < N-1; ++i) cin >> a[i] >> b[i];
    queue<int> qf,qs;
    qf.push(1);
    qs.push(N);
    while(qf.empty() == false && qs.empty() == false){
        int qffront = qf.front();qf.pop();
        int qsfront = qs.front();qs.pop();
        for(int i = 0; i < N-1; ++i){
            if(qffront == a[i] && memo[b[i]] == false && memo[a[i]] == false){
                qf.push(b[i]);
            }
            if(qffront == b[i] && memo[a[i]] == false && memo[b[i]] == false){
                qf.push(a[i]);
            }
            if(qsfront == a[i] && memo[b[i]] == false && memo[a[i]] == false){
                qs.push(b[i]);
            }
            if(qsfront == b[i] && memo[a[i]] == false && memo[b[i]] == false){
                qs.push(a[i]);
            }
        }
        memo[qffront] = true;
        memo[qsfront] = true;
    }
    if(qf.empty())
        cout << "Snuke" << endl;
    else
        cout << "Fennec" << endl;

    return 0;
}

