#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    int x[100001],y[100001],t[100001];
    x[0] = 0; y[0] = 0; t[0] = 0;
    for(int i = 1; i <= N; ++i) cin >> t[i] >> x[i] >> y[i];

    for(int i = 1; i <= N; ++i){
        int time = t[i] - t[i-1];
        int difx = abs(x[i] - x[i-1]);
        int dify = abs(y[i] - y[i-1]);
        if(time < difx + dify){
            cout << "No" << endl;
            return 0;
        }else if(time % 2 == (difx+dify)%2){
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}

