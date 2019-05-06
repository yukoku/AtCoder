#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[100010];
    for(int i = 0; i < N; ++i) cin >> A[i];
    
    long long total = abs(A[0]);
    for(int i = 0; i < N-1; ++i)
        total += abs(A[i] - A[i+1]);
    total += abs(A[N-1]);

    int fans = total;
    fans -= abs(A[0]);
    fans -= abs(A[0] - A[1]);
    fans += abs(A[1]);
    cout << fans << endl;
    for(int i = 0; i < N-2; ++i){
        int ans = total;
        ans -= abs(A[i] - A[i+1]);
        ans -= abs(A[i+1] - A[i+2]);
        ans += abs(A[i] - A[i+2]);
        cout << ans << endl;
    }
    int lans = total;
    lans -= abs(A[N-1]);
    lans -= abs(A[N-2] - A[N-1]);
    lans += abs(A[N-2]);
    cout << lans << endl;
    return 0;
}

