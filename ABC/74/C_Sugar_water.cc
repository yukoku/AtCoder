#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    double sol = 0;
    int mw = a*100;
    int ms = 0;
    for(int i = 0; i <= f/(a*100); ++i){
        for(int j = 0; j <= (f-100*a*i)/(b*100); ++j){
            for(int k = 0; k <= (f-100*b*j-100*a*i)/c; ++k){
                for(int l = 0; l <= (f-c*k-100*b*j-100*a*i)/d; ++l){
                    if(i == 0 && j == 0 && k == 0 && l == 0) continue;
                    double w = 100*a*i + 100*b*j;
                    double s = c*k + d*l;
                    if(100*s/(w+s) <= 100.0*e/(100.0+e)){
                        if(sol < 100*s/(w+s)){
                            mw = static_cast<int>(w);
                            ms = static_cast<int>(s);
                            sol = 100*s/(w+s);
                        }
                    }
                }
            }
        }
    }
    cout << mw+ms << " " << ms << endl;
    return 0;
}

