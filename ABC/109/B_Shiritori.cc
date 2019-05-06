#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string w[100];
    for(int i = 0; i < N; ++i) cin >> w[i];
    string word = w[0];
    for(int i = 1; i < N; ++i){
        if(word[word.size() -1] != w[i][0]){
            cout << "No" << endl;
            return 0;
        }
        word = w[i];
    }

    set<string> words(w, w+N);
    if(words.size() != N){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}

