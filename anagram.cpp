#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ch_space.inp","r",stdin);
    freopen("ch_space.out","w",stdout);
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> mp1,mp2;
    for(char x: s1) {
        if(x!=' ') mp1[tolower(x)]++;
    }
    for(char x: s2) {
        if(x!=' ') mp2[tolower(x)]++;
    }
    if(mp1==mp2) cout <<"anagram";
    else cout <<"no";
}
