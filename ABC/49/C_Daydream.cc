#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    string s;
    cin >> s;
    vector<string> t {"maerd", "remaerd", "esare", "resare"};
    reverse(s.begin(), s.end());

    while(s.size() != 0){
        bool exist = false;
        for(auto itr = t.begin(); itr != t.end(); ++itr){
            if(s.substr(0, itr->size()) == *itr){
                s.erase(0, itr->size());
                exist = true;
                break;
            }
        }
        if(exist == false){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

