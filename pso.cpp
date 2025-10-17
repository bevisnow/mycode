#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("findk.inp","r",stdin);
    freopen("findk.out","w",stdout);
    int n;
    cin >>n;
    double s=0;
    for(int i=1;i<=n;i++){
        s+=1.0/i;
    }
    cout <<s;
}
