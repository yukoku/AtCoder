#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int ans = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'a') ans |= 0x01;
        if(s[i] == 'b') ans |= 0x02;
        if(s[i] == 'c') ans |= 0x04;
    }
    if(ans == 0x07) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

