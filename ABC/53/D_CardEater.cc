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
    map<int, int> a;
    for(int i = 0; i < N; ++i){
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }

    int sum = 0;
    for(auto& t : a){
        t.second--;
        sum += t.second;
    }

    if(sum % 2 == 0){
        cout << N - sum << endl;
    }else{
        cout << N - sum - 1 << endl;

    }


    return 0;
}

