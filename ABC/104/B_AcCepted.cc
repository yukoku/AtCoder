#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s[0] != 'A'){
        cout << "WA" << endl;
        return 0;
    }

    bool existC = false;
    int indexC = 0;
    for(int i = 2; i < s.size() -1; ++i){
        if(s[i] == 'C' ){
            if(!existC){
                existC = true;
                indexC = i; 
            }else{
                existC = false;
                break;
            }
        }

    }

    if(!existC){
        cout << "WA" << endl;
        return 0;
    }

    for(int i = 1; i < s.size(); ++i){
        if((s[i] > 'z' || s[i] < 'a') && i != indexC){
            cout << "WA" << endl;
            return 0;
        }
    }
     
    cout << "AC" << endl;

    return 0;
}

