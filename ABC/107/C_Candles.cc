// cheating answer
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;
    int x[100000];
    int center_index = 2E9;

    for(int i = 0; i < N; ++i){
        cin >> x[i];
    }

    int min_time = 2E9;
    for(int i = 0; i < N - K + 1; ++i){
        int time = 0;
        if(abs(x[i]) <= abs(x[K-1 + i])){
            if(x[i] < 0){
                time += abs(x[i]*2);
            }
                time += x[K-1+i];
        }else{
            if(x[K-1+i] >0){
                time += x[K-1+i] * 2;
            }
            time += abs(x[i]);
        }
        min_time = min(min_time, time);
    }

    cout << min_time << endl;

    return 0;
}

