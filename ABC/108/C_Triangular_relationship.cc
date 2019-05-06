// TLE
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;

    int cnt = 0;
    for(int a = N; a > 0; --a){
        for(int b = a; b > 0; --b){
            for(int c = b; c > 0; --c){
                if((a+b)%K == 0 && (b+c)%K == 0 && (c+a)%K == 0){
                    if(a == b && b == c){
                        cnt++;
                        continue;
                    }
                    else if(a == b || b == c || c == a){
                        cnt += 3;
                        continue;
                    }
                    else{
                        cnt += 6;
                        continue;
                    }
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}

