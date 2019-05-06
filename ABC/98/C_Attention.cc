#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int main()
{
    int N;
    string s;
    cin >> N >> s;

    vector<int> v(N,0);

    for(int i = 1; i < N; ++i)
    {
        if(s[i] == 'E')
            v[0]++;
    }

    for(int i = 0; i < N - 1; ++i){
        if(s[i] == 'W')
            v[i+1] = v[i] + 1; 
        else
            v[i+1] = v[i];
        if(s[i+1] == 'E')
            v[i+1] -= 1;
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    return 0;
}

