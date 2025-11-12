#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("ch_space.inp","r",stdin);
    freopen("ch_space.out","w",stdout);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string phu,p2="";
    while(ss >> phu){
        phu[0]=toupper(phu[0]);
        for(int i=1;i<phu.size();i++){
            phu[i]=tolower(phu[i]);
        }
        if(!p2.empty()) p2+=" ";
        p2+=phu;
    }
    cout <<p2;
}
