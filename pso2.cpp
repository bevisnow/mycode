#include <bits/stdc++.h>
using namespace std;
int mau(int n){
    long long s=0;
    s=n*(n+1)*(2*n+1)/6;
    return s;
}
int main(){
    freopen("findk.inp","r",stdin);
    freopen("findk.out","w",stdout);
    int n;
    cin >>n;
    double s=0;
    for (int i=1;i<=n;i++){
        s+=pow(-1,i+1)/mau(i);
    }
    cout <<s;
}
