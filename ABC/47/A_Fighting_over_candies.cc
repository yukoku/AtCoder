#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if(a[0] + a[1] == a[2])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}

