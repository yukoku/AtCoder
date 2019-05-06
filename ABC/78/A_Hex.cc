#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    char x,y;
    cin >> x >> y;
    if(x < y)
        cout << "<" << endl;
    else if(x > y)
        cout << ">" << endl;
    else
        cout << "=" << endl;
    return 0;
}

