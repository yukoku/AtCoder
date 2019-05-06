#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[3000];
    for(int i = 0; i < N; ++i) cin >> a[i];
    int sum = accumulate(a, a+N, 0);
    cout << sum - N << endl;
    return 0;
}

