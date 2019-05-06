#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    string s;
    int K;
    cin >> s >> K;
    string t(s);
    set<string> st;
    sort(t.begin(), t.end());

    set<char> cst;
    for(int i = 0; i < t.size(); ++i)
        cst.insert(t[i]);

    for(auto itr = cst.cbegin(); itr != cst.cend(); ++itr){
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == *itr){
                for(int j = 0; j <= s.size() - i && j <= K; ++j){
                    st.insert(s.substr(i, j));
                }
            }
        }
        if(st.size() > K) break;
    }
    st.erase("");

    int cnt = 1;
    for(auto itr = st.cbegin(); itr != st.cend(); ++itr){
        if(cnt == K){
            cout << *itr << endl;
            break;
        }
        cnt++;
    }

    return 0;
}

