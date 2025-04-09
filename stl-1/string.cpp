#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // input string using loop ----------
    // int n;
    // cin >> n;
    // string s;
    // for(int i = 0;i<n;i++){
    //     char c;
    //     cin >> c;
    //     s.push_back(c);
    // }

    //direct input ------------
    string s;
    cin >> s;
    // cout << s << endl;

    s.pop_back();// remove last character  0(1)
    // cout << s<<endl;

    // access first and last element-----------
    // cout << s.front() << endl; 0(1)
    // cout << s.back() << endl; 0(1)


    // check empty
    // cout << s.empty() << endl; // if return 0 mean not empty

    
    // s.clear();  // make clear string 0(n)
    // cout << s << endl;


    



    
    return 0;
}