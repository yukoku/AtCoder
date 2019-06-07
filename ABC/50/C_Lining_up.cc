#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N;
    cin >> N;
    map<int, int> A;
    for(int i = 0; i < N; ++i){
        int tmp;
        cin >> tmp;
        A[tmp] += 1;
    }

    int tmp = 0;
    if(N % 2 == 0){
        for(auto itr = A.begin(); itr != A.end(); ++itr){
            if(itr->second != 2){
                cout << 0 << endl;
                return 0;
            }
        }
        tmp = A.size();
    }else{
        if(A[0] != 1){
            cout << 0 << endl;
            return 0;
        }
        for(auto itr = next(A.begin()); itr != A.end(); ++itr){
            if(itr->second != 2){
                cout << 0 << endl;
                return 0;
            }
        }
        tmp = A.size() - 1;
    }

    ll ans = 1;
    for(int i = 1; i <= tmp; ++i){
        ans = (ans * 2) % 1000000007;
    }
    cout << ans << endl;
    return 0;
}

