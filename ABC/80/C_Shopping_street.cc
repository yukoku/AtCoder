#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

typedef long long ll;

int main()
{
    int N;
    cin >> N;
    bool F[100][5][2];
    int p[100][11];

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < 5; ++j){
                cin >> F[i][j][0] >> F[i][j][1];
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < 11; ++j){
            cin >> p[i][j];
        }
    }

    ll benefit = -INFL;
    bool all_0 = true;
    for(int a = 0; a < 2; ++a)
    for(int b = 0; b < 2; ++b)
    for(int c = 0; c < 2; ++c)
    for(int d = 0; d < 2; ++d)
    for(int e = 0; e < 2; ++e)
    for(int f = 0; f < 2; ++f)
    for(int g = 0; g < 2; ++g)
    for(int h = 0; h < 2; ++h)
    for(int i = 0; i < 2; ++i)
    for(int j = 0; j < 2; ++j)
    {
        if(all_0 == true){
            all_0 = false;
            break;
        }
        ll be = 0;
        for(int k = 0; k < N; ++k){
            int cnt = 0;
            if(a == 1 && F[k][0][0] == true) cnt++;
            if(b == 1 && F[k][0][1] == true) cnt++;
            if(c == 1 && F[k][1][0] == true) cnt++;
            if(d == 1 && F[k][1][1] == true) cnt++;
            if(e == 1 && F[k][2][0] == true) cnt++;
            if(f == 1 && F[k][2][1] == true) cnt++;
            if(g == 1 && F[k][3][0] == true) cnt++;
            if(h == 1 && F[k][3][1] == true) cnt++;
            if(i == 1 && F[k][4][0] == true) cnt++;
            if(j == 1 && F[k][4][1] == true) cnt++;
            be += p[k][cnt];
        }
        benefit = max(benefit, be);
    }
    cout << benefit << endl;

    return 0;
}

