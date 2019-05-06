#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    bool isSame = false;
    for(int i = 0; i < s.size(); ++i){

        string tmp(s, i, s.size());
        for(int j = 0; j < i; ++j) tmp += s[j];
        if(tmp == t){
            isSame = true;
            break;
        }
    }
    if(isSame)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

