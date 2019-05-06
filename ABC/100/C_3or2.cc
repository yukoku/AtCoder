#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    unsigned int a[10000];
    cin >> N;
    for(int i = 0; i < N; ++i) cin >> a[i];
    unsigned int cnt = 0;
    for(int i = 0; i < N; ++i){
        while(true){
            if(a[i] % 2 == 0){
                cnt++;
                a[i] /= 2;
            }
            else{
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

