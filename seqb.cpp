#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    int n,a[100];
    cin >>n;
    int s=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
        s+=a[i];
        cout <<s<<" ";
    }
}
