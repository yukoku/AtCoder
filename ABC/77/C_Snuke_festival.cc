#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    int N;
    cin >> N;
    int a[100010],b[100010],c[100010];
    for(int i = 0; i < N; ++i) cin >> a[i];
    for(int i = 0; i < N; ++i) cin >> b[i];
    for(int i = 0; i < N; ++i) cin >> c[i];

    sort(a,a+N,greater<int>());
    sort(b,b+N,greater<int>());
    sort(c,c+N,greater<int>());

    ll cnt = 0;
    int inij = 0;
    for(int i = 0; i < N; ++i){
        int inik = 0;
        for(int j = inij; j < N; ++j){
            if(c[i] > b[j]){
                for(int k = 0; k < N; ++k){
                    if(b[j] > a[k]){
                        cnt += N-k;
                        break;
                    }else{
                        inik = k+1;
                    }
                }
            }else{
                inij = j+1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

