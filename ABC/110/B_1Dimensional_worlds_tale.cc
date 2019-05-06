// 2 miss

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;
    int x[101],y[101];
    for(int i = 0; i < N; ++i) cin >> x[i];
    for(int i = 0; i < M; ++i) cin >> y[i];
    x[N] = X;
    y[M] = Y;
    sort(x, x+N+1, greater<int>());
    sort(y,y+M+1);

    if(y[0] - x[0] >= 1) cout << "No War" << endl;
    else cout << "War" << endl;

    return 0;
}

