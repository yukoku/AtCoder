#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    int N;
    cin >> N;
    int n = 0;
    while(n*n <= N){
        n++;
    }
    --n;
    cout << n*n << endl;
    return 0;
}

