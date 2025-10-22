#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    int n,a[100];
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int dem=0,s=0;
    for (int i=0;i<n;i++){
        if (a[i]>a[5]){
                dem++;
                s+=a[i];
        }
    }
    cout <<dem<<endl;
    cout <<s;
}
