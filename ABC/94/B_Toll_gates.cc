#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N,M,X;
    cin >> N >> M >> X;
    int A[110];
    for(int i = 0; i < M; ++i) cin >> A[i];
    int prise_left = 0;
    int prise_right = 0;
    sort(A, A+M);
    for(int i = 0; i < M; ++i){
        if(A[i] < X)
            prise_left++;
        else
            prise_right++;
    }

    cout << min(prise_left, prise_right) << endl;
    return 0;
}

