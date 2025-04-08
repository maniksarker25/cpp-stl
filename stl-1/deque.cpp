// deque----------


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    deque<int>dq(n);

    for(int i = 0;i<n;i++){
        cin >> dq[i];
    }

    // use can push in front with 0(1)
    dq.push_front(4);
    dq.push_front(66);

    // we can pop from front 0(1)
    dq.pop_front();

    for(auto val : dq){
        cout << val << " ";
    }
    cout << endl;

    // access front  0(1)
    cout << dq.front() << endl;
    // access end 0(1)
    cout << dq.back()<<endl;
    
    return 0;
}