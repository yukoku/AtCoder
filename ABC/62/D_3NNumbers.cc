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
    priority_queue<int, vector<int>, greater<int>> a1;
    priority_queue<int> a3;
    int aa[200000];
    ll fsum = 0;
    ll ssum = 0;
    for(int i = 0; i < 3 * N; ++i){
        if(i >= 0 && i < N){
            int tmp;
            cin >> tmp;
            a1.push(tmp);
            fsum += tmp;
        }else{
            cin >> aa[i-N];
            a3.push(aa[i-N]);
        }
    }

    sort(aa, aa+2*N);
    for(int i = 0; i < N; ++i){
        ssum += aa[i];
    }

    for(int i = 0; i < N; ++i){
        int fmin = a1.top();
        int smax = a3.top();
        if(a2.front() - fmin < smax - a2.back()){
            ssum -= smax - a2.back();
            a3.pop();
            a3.push(a2.back());
            a2.pop_back();
        }else{
            fsum += a2.front() - fmin;
            a1.pop();
            a1.push(a2.front());
            a2.pop_front();
        }
    }

    cout << fsum - ssum << endl;

    return 0;
}

