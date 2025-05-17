#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    for(int i = 0;i<(1<<n);i++){
        cout << i << "=> ";
        for(int k = 0;k<n;k++){
            if((i>>k) & 1){
                cout << 1 << " ";
            }
            else{
                cout << 0 <<" ";
            }
        }
        cout << endl;
    }
    
    return 0;
}