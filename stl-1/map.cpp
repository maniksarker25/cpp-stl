// learn map-----------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    map<int,int>mp;

    // insert into mp
    // mp.insert({2,20});
    mp[2] = 20;
    mp[4] = 30;
    mp[4] =40; // reply 30 to 40 for 4(key)
    mp[1] = 10;

    // print cout 
    // cout << mp[2] << ' ' << mp[4] <<endl;

    // print with loop (range based)
    // for(auto [key,value]:mp){
    //     cout << key << ' '<<value << endl;
    // }

    // use itirator
    for(auto it : mp){
        int key = it.first, value = it.second;
        cout << key << ' ' << value << endl;
    }

    return 0;
}