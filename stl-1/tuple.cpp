#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // here can i define unlimited type
    // tuple<string,int,string>t = make_tuple("manik",10,"01756");
    // without make tuple
    tuple<string,int,string>t = {"korin",10,"01756"};


    // access and print 
    // cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t) << endl;

    // use auto for access 
    auto[name,roll,phone] = t;
    cout << name << ' ' << roll << ' ' << phone << endl;


    return 0;
}