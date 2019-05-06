#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    string N;
    cin >> N;
    int f = 0;
    for(auto c : N)
        f += c - '0';
    istringstream iss(N);
    int x;
    iss >> x;
    if(x % f == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

