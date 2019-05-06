// I could not answer.
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    vector<int> ss(26, -1);
    vector<int> ts(26, -1);
    
    for(int i =0; i < s.size(); ++i)
    {
        int a = s[i] - 'a';
        int b = t[i] - 'a';

        if(ss[a] !=-1 || ts[b] != -1){
            if(ss[a] != b || ts[b] != a){
                cout << "No" << endl;
                return 0;
            }
        }
        else{
            ss[a] = b;
            ts[b] = a;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

