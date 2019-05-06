#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int A,B,X;
    cin >> A >> B >> X;
    string ans;
    if(X < A)
        ans = "NO";
    else if(X > A+B)
        ans = "NO";
    else
        ans = "YES";
    cout << ans << endl;
    return 0;
}

