#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("findk.inp","r",stdin);
    freopen("findk.out","w",stdout);
    int n;
    cin >>n;
    int k=0,s=0,s1=0;
    for(int i=0;i<=n;i++){
        s1+=i;
    }
    cout <<s1<<endl;
    while(s<n){
        s+=k;
        if(s!=n){
            k++;
        } else {
            cout <<k;
            return 0;
        }
    }
    cout <<"no";
}
