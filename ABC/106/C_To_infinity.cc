#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long K;
    cin >> s >> K;

    char ans = '1';
    for(int i = 0; i < s.size() && i < K; ++i){
        if(s[i] != '1'){
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;

    return 0;
}

