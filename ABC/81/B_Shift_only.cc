#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    int N;
    cin >> N;
    int a[200];
    for(int i = 0; i < N; ++i) cin >> a[i];
    int cnt = 0;
    while(true){
        bool notDevided = false;
        for(int i = 0; i < N; ++i){
            if(a[i] % 2 != 0){
                notDevided = true;
                break;
            }else{
                a[i] /= 2;
            }
        }
        if(notDevided == false)
            cnt++;
        else
            break;
    }
    cout << cnt << endl;
    return 0;
}

