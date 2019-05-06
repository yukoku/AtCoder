#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(auto c : s){
        if(c == '1') cnt++;
    }
    cout << cnt << endl;
    return 0;
}

