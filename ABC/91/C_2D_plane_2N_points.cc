#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

int lsCompF(pair<int, int> a,pair<int, int> b){
    return a.first < b.first;
}

int lsCompS(pair<int, int> a,pair<int, int> b){
    return a.second < b.second;
}

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> red(N);
    vector<pair<int, int>> blue(N);
    for(int i = 0; i < N; ++i) cin >> red[i].first >> red[i].second;
    for(int i = 0; i < N; ++i) cin >> blue[i].first >> blue[i].second;

    sort(red.begin(), red.end(), lsCompF);
    sort(blue.begin(), blue.end(), lsCompF);
    
    vector<int> reg;
    for(auto itr = red.begin(); itr != red.end(); ++itr){
        for(auto itb = blue.begin(); itb != blue.end(); ++itb){
            bool hasRegistered = false;
            bool isRegistering = false;
            if(itr->first < itb->first){
                vector<pair<int, int>> tmp(itb, blue.end());
                sort(tmp.begin(), tmp.end(), lsCompS);
                for(auto itt = tmp.begin(); itt != tmp.end(); ++itt){
                    if(itr->second < itt->second){
                        for(auto itv = reg.begin(); itv != reg.end(); ++itv){
                            if(*itv == itt->first){
                                hasRegistered = true;
                                break;
                            }
                        }
                        if(hasRegistered == false){
                            reg.push_back(itt->first);
                            isRegistering = true;
                            break;
                        }
                    }
                }
            }
            if(isRegistering)
                break;
        }
    }
    cout << reg.size() << endl;

    return 0;
}

