#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    int n,q,x1,x2,a[100];
    cin >>n>>q;
    for(int i=1;i<=n;i++){
        cin >>a[i];
    }
    int s=0;
    for (int i=0;i<q;i++){
        cin >>x1>>x2;
        for(int i=x1;i<=x2;i++){
                s+=a[i];
        }
        cout <<s<<endl;
        s=0;
    }
}
