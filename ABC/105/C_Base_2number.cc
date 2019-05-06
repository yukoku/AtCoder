#include<bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    cin >> N;

    char S[100] = {};

    int i = 0;
    int x = N;
    while(true){

        if(x == 0){
            S[i] = '0';
            break;
        }
        else if(x == 1){
            S[i] = '1';
            break;
        }
        else if(x % 2 == 0){
            x /= -2;
            S[i] = '0';
            i++;
        }
        else{
            x = x - 1;
            x /= -2;
            S[i] = '1';
            i++;
        }
    }
    for(int j = i; j >= 0; --j) cout << S[j];
    cout << endl;
    
    return 0;
}

