#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    string s;
    cin >> s;

    for(int i = 0; i < A; ++i){
        if(s[i] > '9' || s[i] < '0'){
            cout << "No" << endl;
            return 0;
        }
    }

    if(s[A] != '-'){
        cout << "No" << endl;
        return 0;
    }

    for(int i = A + 1; i < A + B + 1; ++i){
        if(s[i] > '9' || s[i] < '0'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

