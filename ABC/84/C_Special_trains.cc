#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> C(N), S(N), F(N);
    for(int i = 0; i < N-1; ++i) cin >> C[i] >> S[i] >> F[i];

    for(int i = 0; i < N-1; ++i){
        int time = C[i] + S[i];
        for(int j = i+1; j < N - 1; ++j){
            if(time > S[j]){
                int k = 0;
                while(time > S[j] + F[j] * k){
                    ++k;
                }
                time = S[j] + F[j] * k + C[j];
            }else{
                time = C[j] + S[j];
            }
        }
        cout << time << endl;
    }
    cout << 0 << endl;

    return 0;
}

