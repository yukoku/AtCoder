#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

bool alpha[26];

int main()
{
    string s;
    cin >> s;
    for(auto itr = s.begin(); itr < s.end(); ++itr){
        alpha[*itr - 'a'] = true;
    }
    bool notFound = true;
    for(int i = 0; i < 26; ++i){
        if(alpha[i] == false) {
            char c = i + 'a';
            cout << c << endl;
            return 0;
        }
    }
    if(notFound)
        cout << "None" << endl;
    return 0;
}

