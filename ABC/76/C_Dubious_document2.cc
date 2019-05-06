#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;

int main()
{
    string s,t;
    cin >> s >> t;
    int replace = -1;
    for(int i = s.size()-1; i >= 0; --i){
        bool equal = true;
        for(int j = t.size()-1, cnt = 0; j >= 0; --j){
            if(s[i-cnt] != '?' && s[i-cnt] != t[j]){
                equal = false;
                break;
            }
            cnt++;
        }
        if(equal){
            replace = i-t.size()+1;
            break;
        }
    }

    if(replace == -1)
        cout << "UNRESTORABLE";
    else{
        for(int i = 0; i < s.size(); ++i){
            if(i == replace){
                cout << t;
                i += t.size()-1;
            }
            else if(s[i] == '?')
                cout << 'a';
            else
                cout << s[i];
        }
    }
    cout << endl;
    return 0;
}

