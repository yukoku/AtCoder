#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    int a[100];
    cin >> N;
    for(int i = 0; i < N; ++i) cin >> a[i];
    sort(a,a+N,greater<int>());
    int alice = 0;
    int bob = 0;
    for(int i = 0; i < N; ++i){
        if( i%2 == 0)
            alice += a[i];
        else
            bob += a[i];
    }
    cout << alice - bob << endl;
    return 0;
}

