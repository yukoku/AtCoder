#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(i % 2 == 0){
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}

