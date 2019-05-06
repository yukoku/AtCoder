#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int num[10];
    for(int i = 0; i < s.size() - 2; ++i){
        int X = (s[i] - '0') * 100 + (s[i+1] - '0') * 10 + (s[i+2] - '0');
        num[i] = abs(X - 753);
    }
    cout << *min_element(num, num + s.size() - 2) << endl;
    return 0;
}

