#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int A,B,K;
    cin >> A >> B >> K;
    set<int> st;
    for(int i = A; i < (K+A) && i <= B; ++i) st.insert(i);
    for(int i = B; i > (B-K) && i >= A; --i) st.insert(i);

    for(auto i : st)
        cout << i << endl;

    return 0;
}

