#include<bits/stdc++.h>

using namespace std;

ll gcd(ll a, ll b){
    if(a % b == 0)
        return b;
    return GCD(b, a % b);
}

ll lcm(ll a, ll b){
    // a * b / GCD(a, b) is overflow
    return a / GCD(a, b) * b;
}

int main()
{
    int first,second;
    cin >> first >> second;
    int a = max(first,second);
    int b = min(first,second);

    cout << gcd(a,b) << endl;
    return 0;
}

