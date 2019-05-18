#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    ll N;
    cin >> N;
    
    if(N == 1){
        cout << 1 << endl;
        return 0;
   }

    int min_length = INF;
    for(ll i = 1; i < N; ++i){
        if(i*i > N) break;
        if(N % i == 0){
            string s1 = to_string(i);
            string s2 = to_string(N/i);
            int f = max(s1.size(), s2.size());
            min_length = min(f, min_length); 
        }
    }
    cout << min_length << endl;
    return 0;
}

