#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    string s;
    int K;
    cin >> s >> K;
    set<string> st;
    st.insert(s);
    for(int i = 0; i < s.size(); ++i){
        for(int j = i; j <= s.size(); ++j){
            st.insert(s.substr(i, s.size() - j - 1));
        }
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

