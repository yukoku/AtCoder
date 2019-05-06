#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[100];
    for(int i = 0; i < N; ++i) cin >> a[i];
    int max = *max_element(a, a+N);
    int min = *min_element(a, a+N);
    cout << max - min << endl;
    return 0;
}

