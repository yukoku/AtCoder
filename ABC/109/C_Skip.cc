#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,X;
    cin >> N >> X;
    int x[100000];
    for(int i = 0; i < N; ++i) cin >> x[i];
    for(int i = 0; i < N; ++i) x[i] = abs(x[i] - X);
    sort(x,x+N);
    for(int D = x[0]; D >= 1; --D){
        bool canMove = true;
        for(int j = 0; j < N; ++j){
            if(x[j] % D != 0){
                canMove = false;
                break;
            }
        }
        if(canMove){
            cout << D << endl;
            return 0;
        }
    }

    return 0;
}

