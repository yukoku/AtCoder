#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    string s[100000];
    for(int i = 0; i < N; ++i) cin >> s[i];

    set<string> stM;
    set<string> stA;
    set<string> stR;
    set<string> stC;
    set<string> stH;
    for(int i = 0; i < N; ++i){
        if(s[i][0] == 'M') stM.insert(s[i]);
        if(s[i][0] == 'A') stA.insert(s[i]);
        if(s[i][0] == 'R') stR.insert(s[i]);
        if(s[i][0] == 'C') stC.insert(s[i]);
        if(s[i][0] == 'H') stH.insert(s[i]);
    }

    long long ans = 0;
    ans += stM.size() * stA.size() * stR.size();
    ans += stM.size() * stA.size() * stC.size();
    ans += stM.size() * stA.size() * stH.size();
    ans += stM.size() * stR.size() * stC.size();
    ans += stM.size() * stR.size() * stH.size();
    ans += stM.size() * stC.size() * stH.size();

    ans += stA.size() * stR.size() * stC.size();
    ans += stA.size() * stR.size() * stH.size();
    ans += stA.size() * stC.size() * stH.size();

    ans += stR.size() * stC.size() * stH.size();

    cout << ans << endl;
    return 0;
}

