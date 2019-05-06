#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;
    int A[100000];
    for(int i = 0; i < N; ++i) cin >> A[i];
    if(K == 2){
        cout << N - 1 << endl;
        return 0;
    }

    int min_index = -1;
    for(int i = 0; i < N; ++i){
        if(A[i] == 1){
            min_index = i;
            break;
        }
    }
    int a = (min_index + 1) % K;
    int b = (N - (min_index + 1)) % K;

    cout << a << " " << b << endl;
    
    return 0;
}

