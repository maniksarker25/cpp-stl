#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n;
    long long k;
    cin >> n >>k;
    vector<long long>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    int l = 0,r=0;
    long long ans = 0;
    multiset<long long>mls;
    while(r<n){
        mls.insert(a[r]);
        auto mn = mls.begin();
        auto mx = mls.rbegin();
        if(*mx - *mn <= k){
            ans += (r-l+1);
        }
        else{
            while(l<=r){
                auto mn = mls.begin();
                auto mx = mls.rbegin();
                if(*mx - *mn <= k){
                   break;
                }
                mls.erase(mls.find(a[l]));
                l++;
            }
            auto mn = mls.begin();
            auto mx = mls.rbegin();
            if(*mx - *mn <= k){
                ans += (r-l+1);
            }
        }
        r++;
    }
    cout << ans <<endl;
    return 0;
}