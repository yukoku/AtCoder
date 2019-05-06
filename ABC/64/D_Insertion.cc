#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int N;
    string s;
    cin >> N >> s;
    int rp = 0;
    int lp = 0;
    for(int i = 0; i < N; ++i){
        if(s[i] == ')'){
            if(lp>0){
                lp--;
                continue;
            }
            rp++;
        }else{
            lp++;
        }
    }

    s.insert(s.begin(),rp,'(');
    s.insert(s.end(),lp,')');
    cout << s << endl;
    
    return 0;
}

