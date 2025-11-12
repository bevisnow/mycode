#include <bits/stdc++.h>
using namespace std;
string ch_space(const string &s){
    stringstream ss(s);
    string p1, p2;
    while(ss >> p1){
        if(!p2.empty()) p2+=" ";
        p2+=p1;
    }
    return p2;
}
int main(){
    freopen("ch_space.inp","r",stdin);
    freopen("ch_space.out","w",stdout);
    string s;
    getline(cin, s);
    cout<<ch_space(s);
}
// nếu p2 rỗng thì sẽ tạo 1 space và thêm space đó vào p1
