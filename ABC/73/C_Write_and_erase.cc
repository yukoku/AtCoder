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
    map<int, int> m;
    for(int i = 0; i < N; ++i){
        if(m.count(a[i])){
            m.erase(a[i]);
        }else{
            m[a[i]] = 1;
        }
    }
    cout << m.size() << endl;
    return 0;
}

