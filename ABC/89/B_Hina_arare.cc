#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    cin >> N;
    char c[100];
    for(int i = 0; i < N; ++i) cin >> c[i];
    set<char> st(c, c+N);
    if(st.size() == 3)
        cout << "Three" << endl;
    else
        cout << "Four" << endl;
    return 0;
}

