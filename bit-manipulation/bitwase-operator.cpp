#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 7,b = 14;
    int andAns = ( a & b);
    int orAns = (a | b);
    int xorAns = (a ^ b);
    cout << andAns <<endl;
    cout << orAns <<endl;
    cout << xorAns <<endl;

    return 0;
}