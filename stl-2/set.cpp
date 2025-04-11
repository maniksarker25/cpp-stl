#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    set<int>s;
    for(int i = 0;i<n;i++){
        int x;
        cin >>x;
        s.insert(x);
    }

    // access / print -------
    // auto it = s.begin();
    // it++;
    // cout << *it << endl;

    // print using range based for loop----
    // for(auto value : s){
    //     cout << value << ' ';
    // }

    // find ---------------------
    // auto it = s.find(6);
    // if(it !=s.end());
    // if(it != s.end()){
    //     cout << "Found"<<endl;
    // }
    // else{
    //     cout << "Not found"<<endl;
    // }

    // erase ---------------------------
    // s.erase(6);


    // count -------------------

    // cout << s.count(6); // if have return 1 if not have return 0

    // lower bound ------------------------

   auto it = s.lower_bound(20); // return equal or greater itirator---------
   if(it == s.end()){
    cout << "Not Found" << endl;
   }
   else{
    cout << "lower bound => " << *it << endl;
   }

   //upper bound-----------
    auto it2 = s.upper_bound(6); // return always imidate greater value --------
    if(it2 == s.end()){
        cout << "Not found" <<endl;
    }
    else{
        cout << "upper bound => " << *it2 << endl;
    }





    // print
    // for(auto value : s){
    //     cout << value << ' ';
    // }
    
    return 0;
}