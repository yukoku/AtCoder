#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1 << 30;

using namespace std;

using ll = long long;
using P = tuple<int, int>;
using iarr = valarray<int>;

int main()
{
    string sa,sb,sc;
    cin >> sa >> sb >> sc;

    queue<char> qsa,qsb,qsc;
    for(auto itr = sa.begin(); itr != sa.end(); ++itr) qsa.push(*itr);
    for(auto itr = sb.begin(); itr != sb.end(); ++itr) qsb.push(*itr);
    for(auto itr = sc.begin(); itr != sc.end(); ++itr) qsc.push(*itr);

    char c = qsa.front(); qsa.pop();
    while(true)
    {
        if(c == 'a'){
            if(qsa.empty()){
                cout << "A" << endl;
                return 0;
            }
            c = qsa.front(); qsa.pop();
        }else if(c == 'b'){
            if(qsb.empty()){
                cout << "B" << endl;
                return 0;
            }
            c = qsb.front(); qsb.pop();
        }else if(c == 'c'){
            if(qsc.empty()){
                cout << "C" << endl;
                return 0;
            }
            c = qsc.front(); qsc.pop();
        }
    }

    return 0;
}

