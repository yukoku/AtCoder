#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    istringstream iss(a+b);
    int tmp;
    iss >> tmp;

    for(int i = 1; i <= 100000 ; ++i){
        if(i*i == tmp){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

