#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num+3, greater<int>());
    cout << num[0] * 10 + num[1] + num[2] << endl;
    return 0;
}
