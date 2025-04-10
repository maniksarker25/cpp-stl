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
    mp[2] = 20;  // 0(log n)
    mp[4] = 30;
    mp[4] =40; // reply 30 to 40 for 4(key)
    mp[1] = 10;
    mp[6] = 60;
    mp[7] = 76;
    mp[77] = 35;

    // print cout 
    // cout << mp[2] << ' ' << mp[4] <<endl;

    // print with loop (range based)
    // for(auto [key,value]:mp){
    //     cout << key << ' '<<value << endl;
    // }

    // use itirator
    // for(auto it : mp){
    //     int key = it.first, value = it.second;
    //     cout << key << ' ' << value << endl;
    // }


    // find operation --------------------
    // auto it = mp.find(45);
    // cout << it->first << ' ' << it->second << endl;
    // if(it==mp.end()){
    //     cout << "Not found" << endl;
    // }
    // else{
    //     cout << "Found" << ' ' << it->first << ' ' << it->second << endl;
    // }


    // 
    // cout << mp[99] << endl; // if not found then it add one key, value in map {99,0} and return 0


    // erase------------------

    // mp.erase(6);

    auto it = mp.find(6);
    if(it != mp.end()){
        mp.erase(it);
    }

    // print again---
    for(auto it : mp){
        int key = it.first, value = it.second;
        cout << key << ' ' << value << endl;
    }


    return 0;
}