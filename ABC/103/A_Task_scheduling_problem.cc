#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A[3];
    for(int i = 0; i < 3; ++i) cin >> A[i];
    sort(A, A+3);
    int sum = 0;
    for(int i = 0; i < 2; ++i){
        sum += A[i+1] - A[i];
    }
    cout << sum << endl;
    return 0;
}

