// difficult
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int D,G;
    cin >> D >> G;
    vector<pair<int,int>> v;
    v.reserve(10);

    for(int i = 0; i < D; ++i){
        int p,c;
        cin >> p >> c;
        v.push_back(make_pair(p,c));
    }

    vector<tuple<int,int,int>> zone;
    for(int i = 0; i < v.size() - 1; ++i){
        bool isbreak = false;
        int next_problem = 0;
        for(int j = i+1; j < v.size(); ++j){
            for(int k = 0; k < v[j].first; ++k){
                next_problem += 100 * (j+1);
                if(next_problem > v[i].second){
                    zone.push_back(make_tuple(i,j,k));
                    isbreak = true;
                    break;
                }
            }
            if(isbreak) break;
        }
    }

    for(auto it = zone.cbegin(); it < zone.cend(); ++it){
    }
    return 0;
}

