#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2]; 
    sort(a, a+3);

    int dif1 = a[2] - a[1];
    int dif2 = a[2] - a[0];
    if(dif1 % 2 == dif2 % 2)
        cout << (dif1 + dif2) / 2 << endl;
    else
        cout << (dif1 + dif2) / 2 + 2 << endl;
        
    return 0;
}

