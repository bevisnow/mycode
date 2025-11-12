#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    int n,k,a[100];
    cin >>n>>k;
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int s=0,t=0,dem=0;
    double p=0;
    for(int i=0;i<n;i++){
        s=a[i]+a[i+1]+a[i+2];
        t=a[i]*a[i+1]*a[i+2];
        p=t/s;
        if(p==k){
            dem++;
        }
    }
    cout <<dem;
}
