// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool c(int n){
    if (n%2==0) return true;
    return false;
}
bool l(int n){
    if (n%2!=0) return true;
    return false;
}

bool ktnt(int n){
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;
}
bool ktcp(int n){
    int can=sqrt(n);
    if (can*can==n) return true;
    return false;
}
bool dx(int n){
    int dao=0; int goc=n;
    while (n>0){
        dao=dao*10+n%10;
        n/=10;
    }
    if (dao==goc) return true;
    return false;
}
int dn(int n){
    int dao=0;
    while (n>0){
        dao=dao*10+n%10;
        n/=10;
    }
    return dao;
}
int main() {
    int n;
    cin >>n;
    if (c(n)) cout <<"\n1";
    if (l(n)) cout <<"\n2";
    if (ktcp(n)) cout <<"\n3";
    if (ktnt(n)) cout <<"\n4";
    if (dx(n)) cout <<"\n5";
    cout<<dn(n);
}
