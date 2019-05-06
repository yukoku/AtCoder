#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    long long X,Y;
    cin >> X >> Y;
    int cnt = 1;
    long long power = Y / X;
    while(powl(2, cnt) <= power){
        cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}
