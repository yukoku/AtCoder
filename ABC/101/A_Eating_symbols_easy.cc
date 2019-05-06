#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum =0;
    for(auto symbol : s){
        if(symbol == '+')
            sum += 1;
        else
            sum -= 1;
    }
    cout << sum << endl;
    return 0;
}

