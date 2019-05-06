#include<bits/stdc++.h>

using namespace std;

int main()
{
    string strN;
    cin >> strN;

    int digit_sum = 0;
    for(int i = 0; i < strN.size(); ++i){
        digit_sum += (strN[i] - '0');
    }
    istringstream iss(strN);
    int N;
    iss >> N;
    if(N % digit_sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

