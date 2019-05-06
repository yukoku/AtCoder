#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

bool exist[26];
int main()
{
    int N;
    string s;
    cin >> N >> s;

    int mcnt = 0;
    for(int i = 1; i < N; ++i){
        string x = s.substr(0, i);
        string y = s.substr(i); 
        for(int j = 0; j < x.size(); j++){
            for(int k = 0; k < y.size(); k++){
                if(x[j] == y[k])
                    exist[x[j] - 'a'] = true;
            }
        }
        int cnt = 0;
        for(int j = 0; j < 26; ++j)
            if(exist[j] == true){
                cnt++;
                exist[j] = false;
            }
        mcnt = max(mcnt, cnt);
    }

    cout << mcnt << endl;

    return 0;
}

