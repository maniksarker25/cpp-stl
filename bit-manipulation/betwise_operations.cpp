#include <bits/stdc++.h>
using namespace std;


// check k tomo bit on or off
bool check_kth_bit_on_or_off(int n,int k){
    return ((n >>k) & 1);
}

// print on and off bits
void print_on_and_off_bits(int n){
    for(int i = 7;i >= 0;i--){
        if(check_kth_bit_on_or_off(n,i)){
            cout << 1 << endl;
        }
        else{
            cout << 0 <<endl;
        }

    }
}

// turn on kth bit
int turn_on_kth_bit(int n , int k){
    return (n | (1 <<k));
}


// turn on kth bit
int turn_off_kth_bit(int n,int k){
    return (n & (~(1 << k)));
}


// toggle kth bit 

int toggle_kth_bit(int n , int k){
    return (n ^ (1 << k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // check k tomo bit on or off
    // cout << check_kth_bit_on_or_off(45,4) << endl;

    // print on and off bits
    // print_on_and_off_bits(45);

    // turn on kth bit
    // cout << turn_on_kth_bit(45,4) << endl;

    // turn off kth
    // cout << turn_off_kth_bit(45,3) <<endl;

    // toggle kth bit
    cout << toggle_kth_bit(45,4) <<endl;
    
    return 0;
}