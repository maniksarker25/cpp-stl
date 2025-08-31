#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
int a[maxN],t[d* maxN];


void build(int n,int b,int e){

    if(b == e){
        t[n] = a[b];
        return;
    }
    
    int mid = (b+e) / 2, l = 2 * n, r = (2* n) + 1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n] = t[l] + t[r];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,m;
    cin >> n >>m;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }


    build(1,1,n);

    
    return 0;
}