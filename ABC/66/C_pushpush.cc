#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int a[200000];
    for(int i = 0; i < n; ++i) cin >> a[i];
    vector<int> v;
    for(int i = 0; i < n; ++i){
        if(i%2 == 0)
            v.push_back(a[i]);
        else
            v.insert(v.begin(), a[i]);
    }
    if(n % 2 == 0){
        for(auto elem : v)
            cout << elem << " ";
    }else{
        for(int i = v.size()-1; i>=0; --i)
            cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

