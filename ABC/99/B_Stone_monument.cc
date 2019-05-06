#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int a_index = b - a - 1;
    int a_tall = 0;

    for(int i = 0; i < a_index; ++i){
        a_tall += (i+1);
    }
    cout << a_tall - a << endl;
    return 0;
}

