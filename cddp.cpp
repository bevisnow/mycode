#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    int n,a[100];
    cin >>n;
    int dem=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for (int i=0;i<n;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            dem++;
        }
    }
    cout <<dem;
}
