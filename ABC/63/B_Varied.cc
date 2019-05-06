#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

bool exist[26];

int main()
{
    string s;
    cin >> s;
    for(auto c : s){
        if(exist[c-'a']){
            cout << "no" << endl;
            return 0;
        }
        exist[c-'a'] = true;
    }
    cout << "yes" << endl;

    return 0;
}

