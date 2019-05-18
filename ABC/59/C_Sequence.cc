#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    int N;
    cin >> N;
    int a[100000];
    for(int i = 0; i < N; ++i) cin >> a[i];

    ll partial_sum = 0;
    ll cnt = 0;
    int index = 0;
    for(int i = 0; i < N; ++i){
        if(a[i] != 0){
            if(i == 0){
                partial_sum = a[i];
                index = i+1;
                break;
            }else{
                if(i == N-1){
                    if(abs(a[i]) == 1){
                        cout << 1+2*(i-1) + 1 << endl;
                        return 0;
                    }else{
                        cout << 1+2*(i-1) << endl;
                        return 0;
                    }
                }else{
                    cnt += 1 + 2*(i-1) + abs(a[i]);
                    index = i+1;
                    if(a[i] > 0){
                        if(a[i] == 1){
                            cnt++;
                            partial_sum = 1;
                        }else{
                            partial_sum = a[i] - 1;
                        }
                    }else{
                        if(a[i] == -1){
                            cnt++;
                            partial_sum = -1;
                        }else{
                            partial_sum = a[i] + 1;
                        }
                    }
                    break;
                }
            }
        }
    }

    if(index == 0){
        cout << 1+2*(N-1) << endl;
        return 0;
    }

    for(int i = index; i < N; ++i){
        if(partial_sum > 0){
            if(a[i] + partial_sum > 0){
                cnt += abs(-(partial_sum + 1) - a[i]);
                a[i] = -(partial_sum + 1);
                partial_sum = -1;
            }else if(a[i] + partial_sum == 0){
                cnt += 1;
                a[i] = -1;
                partial_sum = -1;
            }else{
                partial_sum += a[i];
            }
        }else{
            if(a[i] + partial_sum < 0){
                cnt += abs(-(partial_sum - 1) - a[i]);
                a[i] = -(partial_sum - 1);
                partial_sum = 1;
            }else if(a[i] + partial_sum == 0){
                cnt += 1;
                a[i] = 1;
                partial_sum = 1;
            }else{
                partial_sum += a[i];
            }
        }

    }
    cout << cnt << endl;

    return 0;
}

