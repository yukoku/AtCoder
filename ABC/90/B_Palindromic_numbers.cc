#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    int cnt = 0;
    for(int i = A; i <= B; ++i){
        ostringstream oss;
        oss << i;
        string tmp = oss.str();
        string tmp2(tmp.rbegin(), tmp.rend());
        if(tmp == tmp2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

