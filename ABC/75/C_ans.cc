#include "bits/stdc++.h"
using namespace std;
#define Rep(i,n) for(int i=0;i<n;i++)
#define For(i,n1,n2) for(int i=n1;i<n2;i++)
#define REP(i,n) for(ll i=0;i<n;i++)
#define RREP(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,n1,n2) for(ll i=n1;i<n2;i++)
#define put(a) cout<<a<<"\n"
#define all(a)  (a).begin(),(a).end()
#define SORT(a) sort((a).begin(),(a).end())
#define oorret 0
#define oor(x) [&](){try{x;} catch(const out_of_range& oor){return oorret;} return x;}()
typedef long long ll;
typedef pair<int, int> P;
template<typename T1,typename T2> inline bool chmin(T1 &a,T2 b){if(a>b){a=b;return 1;}return 0;}
template<typename T1,typename T2> inline bool chmax(T1 &a,T2 b){if(a<b){a=b;return 1;}return 0;}
 
const int MAXN = 50;
bool visited[MAXN];
 
 
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    REP(i,m){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }
    int res = 0;
    REP(i,m){
        REP(j,n){
            visited[j]=false;
        }
        vector<vector<int>> e(n);
        REP(j,m){
            if(j!=i){
                e[a[j]].push_back(b[j]);
                e[b[j]].push_back(a[j]);
            }
        }
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int p = q.front();q.pop();
            visited[p]=true;
            REP(j,e[p].size()){
                if(!visited[e[p][j]]){
                    q.push(e[p][j]);
                }
            }
        }
        bool flag = true;
        REP(j,n){
            flag = flag&&visited[j];
        }
        if(!flag){
            res++;
        }
    }
    put(res);
    return 0;
}
