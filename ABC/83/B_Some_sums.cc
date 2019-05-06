#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    for(int i = 1; i <= N; ++i){
        ostringstream oss;
        oss << i;
        string num = oss.str();
        int tmp = 0;
        for(char digit : num){
            tmp += digit - '0';
        }
        if(tmp >= A && tmp <= B)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}

