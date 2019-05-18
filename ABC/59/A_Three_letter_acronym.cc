#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    cout << static_cast<unsigned char>(toupper(s1.front()));
    cout << static_cast<unsigned char>(toupper(s2.front()));
    cout << static_cast<unsigned char>(toupper(s3.front()));
    cout << endl;

    return 0;
}

