#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int X,A,B;
    cin >> X >> A >> B;
    X -= A;
    while(true)
        if(X-B>=0)
            X-=B;
        else
            break;
    cout << X << endl;
    return 0;
}

