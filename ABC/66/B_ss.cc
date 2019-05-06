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

    for(int i = 1; i < s.size(); i++){
        string t(s.begin(), s.end() -i);
        if(t.substr(0,t.size()/2) == t.substr(t.size()/2)){
            cout << t.size() << endl;
            return 0;
        }
    }
    
    return 0;
}

