#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string,int>student ={"hasib",78};
    
    // cout << student.first << ' ' << student.second << endl;

    // modify 
    // student.first = "hossain";

    // access
    // auto [name,roll] = student;
    // cout << name << ' '<< roll << endl;

    // with array
    int n;
    cin >> n;
    pair<string,int> students[n];
    for(int i = 0;i<n;i++){
        cin >> students[i].first >> students[i].second;
    }

    for(auto [x,y]: students){
    cout << x  << ' ' << y << endl;
    }


    // for multipe 
    pair<string,pair<int,string>> p = {"ncie",{4,"okey"}};

    cout << p.first << ' ' << p.second.first << ' ' << p.second.second << endl;



    return 0;
}