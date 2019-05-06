#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[200000];

    for(int i = 0; i < N; ++i){
        cin >> a[i];
        a[i] -= i;
    }

    sort(a, a+N);
    long long paternA = 0;
    int A = a[N/2];
    if(N == 1){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < N; ++i){
        paternA += abs(a[i] - A);
    }
    cout << paternA << endl;
    return 0;
}

