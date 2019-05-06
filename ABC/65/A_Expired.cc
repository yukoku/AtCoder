#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int x,a,b;
    cin >> x >> a >> b;
    if(b-a>0){
        if(b-a>x){
            cout << "dangerous" << endl;
        }else{
            cout << "safe" << endl;
        }
    }else{
        cout << "delicious" << endl;
    }
    return 0;
}

