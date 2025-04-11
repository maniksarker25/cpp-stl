// learn stl nested ---------------


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    // map with vector nested
    // map<vector<int>,int>mp;

    // vector<int>a;
    // a.push_back(2);
    // a.push_back(1);
    // a.push_back(4);
    // a.push_back(5);
    // a.push_back(9);

    // mp[a] = 5;

    // // print 
    // for(auto [x,y]:mp){
    //     vector<int>v = x;
    //     for(auto value : v){
    //         cout << value << ' ';
    //     }
    //     cout << endl;
    //     cout << y <<endl;

    // }


    // map with set 

    map<int ,set<int>>mp;

    set<int>s1;
    s1.insert(2);
    s1.insert(5);
    s1.insert(2);

    set<int>s2;
    s2.insert(9);
    s2.insert(5);
    s2.insert(4);


    set<int>s3;
    s3.insert(12);
    s3.insert(1);
    s3.insert(6);
    s3.insert(8);



    mp[5] = s1;
    mp[7] = s2;
    mp[10] = s3;

    // print 

    for(auto [x,y]:mp){
        cout << x << " => ";
        for(auto value : y){
            cout << value << ' ';
        }
        cout << endl;
    }


    // find out lower bound from map , if have lower bound then find out that value lower found form this colelction set

    int x = 6, y = 8;

    auto LB1 = mp.lower_bound(x); // find out from map keys 
    if(LB1 != mp.end()){
        int ans = LB1->first;
        cout << "first lower bound => " << ans<< endl;
        auto LB2 = mp[ans].lower_bound(y);
        if(LB2 != mp[ans].end()){
            cout << "second lower bound => " << *LB2 << endl;
        }
        else{
            cout << "Second lower bound not found" <<endl;
        }
    }
    else{
        cout << "first lower found not found"<<endl;
    }

    return 0;
}