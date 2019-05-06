#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;
ll lucasnum[100];
ll lucas(int N){
    if(lucasnum[N] != 0)
        return lucasnum[N];
    else
        return lucasnum[N] = lucas(N-1) + lucas(N-2);
}

int main()
{
    int N;
    cin >> N;
    lucasnum[0] = 2;
    lucasnum[1] = 1;
    cout << lucas(N) << endl;
    return 0;
}

