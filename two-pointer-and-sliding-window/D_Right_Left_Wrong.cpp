#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >>a[i];
        }
        string s;
        cin >> s;
        vector<long long>pre_sum(n);
        pre_sum[0] = a[0];
        for(int i = 1;i<n;i++){
            pre_sum[i] = pre_sum[i-1] + a[i];
        }   
        int l = 0,r = n-1;
        long long answer = 0;
        while(l<r){
            if(s[l] == 'L' && s[r] == 'R'){
              if(l == 0){
                answer += pre_sum[r];
              }
              else{
                answer += (pre_sum[r] - pre_sum[l-1]);
              }
                l++;
                r--;
            }
            else if(s[l] == 'R' && s[r] =='L'){ 
                l++;
                r--;
            }
            else if(s[l] == 'L' && s[r] == 'L'){
                r--;
            }
            else if(s[l] == 'R' && s[r] == 'R'){
                l++;
            }
         
        }
        cout << answer << endl;
    }
    
    return 0;
}