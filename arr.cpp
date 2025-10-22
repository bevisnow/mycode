#include <bits/stdc++.h>
using namespace std;
bool nt(int n){
    if (n<2) return false;
    for(int i=2;i<=sqrt(n);i++)
        if (n%i==0) return false;
    return true;
}
int main(){
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    int a[5];
    for (int i=0;i<5;i++){
        cin >>a[i];
    }
    sort(a,a+5);
    for(int i=0;i<5;i++){
        cout <<a[i]<<" ";
    }
    cout <<endl;
    sort(a,a+5,greater<int>());
    for(int i=0;i<5;i++){
        cout <<a[i]<<" ";
    }
    cout <<endl;
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            cout <<a[i]<<" ";
        }
    }

    cout <<endl;
    for(int i=0;i<5;i++){
        if(nt(a[i])){
            cout <<a[i]<<" ";
        }
    }
}
