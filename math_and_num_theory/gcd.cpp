// GCD => greatest common divisor

#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
   return __gcd(a,b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a>>b;
    cout << GCD(a,b) << endl;

    
    return 0;
}