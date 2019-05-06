#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int num=0;
    if(N%2 == 0) N--;
    for(int i = N; i > 104; i-=2){
        int cnt = 0;
        for(int j = 1; j < N+1; j+=2){
            if(i%j == 0) cnt++;
        }
        if(cnt == 8) num++;
    }
    cout << num << endl;
    return 0;
}

