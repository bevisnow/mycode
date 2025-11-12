#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    int n,t=0,max=0;
    int a[100];
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            t = a[i]*a[j];
            if(max <t){
                max =t;
            }
        }
    }
    cout <<max;
}
