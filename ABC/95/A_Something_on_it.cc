#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    string s;
    cin >> s;
    int prise = 700;
    for(char c : s)
        if(c == 'o')
            prise += 100;

    cout << prise << endl;
    return 0;
}

