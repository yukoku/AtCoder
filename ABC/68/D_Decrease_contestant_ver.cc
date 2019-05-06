#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    ll K;
    cin >> K;
    if(K == 0){
        cout << 1 << endl;
        cout << 0 << endl;
        return 0;
    }
    cout << K << endl; 
    for(ll i = 1; i < K; ++i)
        cout << K << " ";
    cout << K << endl;

    return 0;
}

