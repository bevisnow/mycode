#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(){
    freopen("findk.inp","r",stdin);
    freopen("findk.out","w",stdout);
    int n;
    cin >>n;
    double s=0;
    for(int i=1;i<=n;i++){
        s+=pow(-1,i+1)/(2*i-1);
    }
    cout <<s;
}
