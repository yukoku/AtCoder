#include<bits/stdc++.h>

using namespace std;

long long N;

int dfs(long long s)
{
    if (s > N) return 0;
    int flag = 0;
    string sn = to_string(s);
    
    for (int i = 0; i < sn.size(); ++i){
        if(sn[i] == '3') flag |= 0x01;
        else if (sn[i] == '5') flag |= 0x02;
        else if (sn[i] == '7') flag |= 0x04;
    }
    int ret = 0;
    if (flag == 0x07)  ret = 1;

    ret += dfs(s*10 + 3);
    ret += dfs(s*10 + 5);
    ret += dfs(s*10 + 7);
    return ret;
}

int main()
{
    cin >> N;
    cout << dfs(0) << endl;

    return 0;
}

