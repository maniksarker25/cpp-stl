#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >>n;
    vector<int>v(n);

    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    // 
    // auto it =v.begin();
    // cout << *it << endl; // dereference
    // cout << *it + 1 << endl; // dereference

    // print all element using itarator-----
    // for(auto it = v.begin();it != v.end();it++){
    //     cout << *it << ' ';
    // }


    // access last element
    // auto lastElement = --v.end();
    // lastElement--;
    // cout << *lastElement << endl;

    // reverse , sort using itarator----------
    // reverse(v.begin(),v.end()); // reverse
    // sort(v.begin(),v.end()); // assending sort
    // sort(v.rbegin(),v.rend()); // decending sort
    // sort(v.begin(),v.end(),greater<int>());  // decending with  compare 

    // range based for loop-----
    // for(auto val : v){
    //     cout << val << ' ';
    // }


    // min element , max element -----------

    // min element 
    auto min = min_element(v.begin(),v.end());
    cout << *min << endl;
    auto max = max_element(v.begin(),v.end());
    cout << *max << endl;

    int maxElePosition = max - v.begin();
    cout << maxElePosition << endl;

    
    return 0;
}