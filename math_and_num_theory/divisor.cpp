#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // 0(n) solution ----
    // for(int i = 1;i<=n;i++){
    //     if(n%i == 0){
    //         cout << i << ' ';
    //     }
    // }

    // optimzed version 0(sqrl(n)) -----
    vector<int>divisors;
    for(int i = 1;i<=sqrt(n);i++){
        if(n % i == 0){
            divisors.push_back(i);
           if((n/i) != i){
            divisors.push_back(n/i);
           }
        }
    }
    sort(divisors.begin(),divisors.end());
    for(auto val : divisors){
        cout << val << ' ';
    }
    return 0;
}
