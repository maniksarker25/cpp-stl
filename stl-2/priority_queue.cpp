// learn priority queue ----------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    /// priority queue , not increseing , accending----------------------
    priority_queue<int>pq;

    pq.push(5); // complexity => 0(log N)
    pq.push(2);
    pq.push(1);
    pq.push(5);
    pq.push(3);

    cout << pq.top() << endl; // return top value 
    pq.pop(); // delete form top ------

    cout << "size => " << pq.size() << endl; // total size of priority queue

    cout << pq.empty() << endl; // return 1 if empty , if not return 0

    cout << endl;



    // priority queue , not decreasing , like accending ------------------------
    priority_queue<int,vector<int>,greater<int>>apq;
    apq.push(5); // complexity => 0(log N)
    apq.push(1);

    cout << apq.top() << endl; // return top value 
    apq.pop(); // delete form top ------

    cout << "size => " << apq.size() << endl; // total size of priority queue
    apq.pop();

    cout << apq.empty() << endl; // return 1 if empty , if not return 0


    // print priority queue -----
    cout << "prority queue" << endl;

    while(!pq.empty()){
        int value = pq.top();
        cout << value << ' ';
        pq.pop();
    }
    
    return 0;
}