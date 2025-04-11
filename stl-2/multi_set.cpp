// multi set ------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // multi set sorted but  alowed duplicate and most of the thing is same as set ------
    
    int n;
    cin >> n;
    multiset<int>s;
    for(int i = 0;i<n;i++){
        int x;
        cin >>x;
        s.insert(x);
    }

    // print -------------
    // for(auto value :s){
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
    //  s.erase(9); 0(logN +K)  // in multi set if i use erase it delete all value what i want to delete

    // if i want to erase spacific one -------------
    // auto it = s.find(9);
    // s.erase(it);
    // 0(2logN)


    // count --------------------
    // 0(logN) // if single
    // 0(logN +K) // if have multiple time that element
    // cout << s.count(9) <<endl; // return how many time apear , if not have return 0



    // lower bound and upper bound same as set ---------------
    // lower bound ------------------------

   auto it = s.lower_bound(3); // return equal or greater itirator---------
   if(it == s.end()){
    cout << "Not Found" << endl;
   }
   else{
    cout << "lower bound => " << *it << endl;
   }

   //upper bound-----------
    auto it2 = s.upper_bound(6); // return always imidate greater itarator --------
    if(it2 == s.end()){
        cout << "Not found" <<endl;
    }
    else{
        cout << "upper bound => " << *it2 << endl;
    }








    // print -------------
    for(auto value :s){
        cout << value << ' ';
    }


    
    return 0;
}