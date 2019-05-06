#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;

    int ope[3];
    for(int i = 0; i < (1<<3); ++i){
        int res = s[0] - '0';
        for(int j = 0; j < 3; ++j){
            if(i&(1<<j)){
                res += s[j+1] - '0';
                ope[j] = 1;
            } else{
                res -= s[j+1] - '0';
                ope[j] = 2;
            }
        }
        if(res == 7){
            cout << s[0];
            for(int j = 0; j < 3; ++j){
                if(ope[j] == 1)
                    cout << "+" << s[j+1] - '0';
                else
                    cout << "-" << s[j+1] - '0';

            }
            cout << "=7" << endl;
            return 0;
        }
    }

    return 0;
}

