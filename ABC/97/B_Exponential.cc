#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int X;
    cin >> X;
    if(X == 1){
        cout << 1 << endl;
        return 0;
    }
    int mnum = 1;
    for(int b = 2; b < X; ++b){
        int p = 2;
        while(true){
            if(pow(b,p) <= X){
                mnum = max(mnum, static_cast<int>(pow(b, p)));
                p++;
                continue;
            }else{
                break;
            }
        }
    }
    cout << mnum << endl;
    return 0;
}

