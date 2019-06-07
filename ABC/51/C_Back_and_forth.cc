#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    P s,t;
    cin >> get<0>(s) >> get<1>(s) >> get<0>(t) >> get<1>(t);

    for(int i = get<1>(s); i < get<1>(t); ++i){
        cout << "U";
    }
    for(int i = get<0>(s); i < get<0>(t); ++i){
        cout << "R";
    }
    for(int i = get<1>(s); i < get<1>(t); ++i){
        cout << "D";
    }
    for(int i = get<0>(s); i < get<0>(t); ++i){
        cout << "L";
    }
    cout << "L";
    for(int i = get<1>(s); i < get<1>(t) + 1; ++i){
        cout << "U";
    }
    for(int i = get<0>(s); i < get<0>(t) + 1; ++i){
        cout << "R";
    }
    cout << "D";
    cout << "R";
    for(int i = get<1>(s); i < get<1>(t) + 1; ++i){
        cout << "D";
    }
    for(int i = get<0>(s); i < get<0>(t) + 1; ++i){
        cout << "L";
    }
    cout << "U" << endl;
    return 0;
}

