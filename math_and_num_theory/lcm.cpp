// LCM=> Least common multiple
// note : gcd(a,b) * lcm(a,b) = a*b

#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
   return __gcd(a,b);
}

int LCM(int a,int b){
    // return (a*b) / __gcd(a,b);
    // ignore overflow
    return (a / __gcd(a,b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a>>b;
    cout << LCM(a,b) <<endl;

    
    return 0;
}