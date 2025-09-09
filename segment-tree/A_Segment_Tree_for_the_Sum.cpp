// #include <bits/stdc++.h>
// using namespace std;

// const int maxN = 1e5 + 9;
// long long a[maxN],t[4* maxN];


// void build(int n,int b,int e){

//     if(b == e){
//         t[n] = a[b];
//         return;
//     }
    
//     int mid = (b+e) / 2, l = 2 * n, r = (2* n) + 1;
//     build(l,b,mid);
//     build(r,mid+1,e);
//     t[n] = t[l] + t[r];
// }


// void update(int n,int b,int e, int i , int v){

//     if(i < b || i > e){
//         return;
//     }

//     if(b == e){
//        t[n] = v;
//        return;
//     }
    
//     int mid = (b+e) / 2, l = 2 * n, r = (2* n) + 1;
//     update(l,b,mid,i,v);
//     update(r,mid+1,e,i,v);
//     t[n] = t[l] + t[r];
// }


// long long query(int n,int b,int e,int i , int j){

//     if(e <i || j < b){
//         return 0;
//     }

//     if(b>=i && e<=j){
//         return t[n];
//     }
//     int mid = (b+e) / 2, l = 2 * n, r = (2* n) + 1;
//    return query(l,b,mid,i,j) + query(r,mid+1,e,i,j);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n,m;
//     cin >> n >>m;
//     for(int i = 1;i<=n;i++){
//         cin >> a[i];
//     }


//     build(1,1,n);

//     while(m--){
//         int t;
//         cin >>t;
//         if(t == 1){
//             int idx,v;
//             cin >> idx >> v;
//             idx++;
//             update(1,1,n,idx,v);
//         }
//         else{
//             int l,r;
//             cin >> l >> r;
//             l++;
//             long long ans = query(1,1,n,l,r);
//             cout << ans << endl;
//         }
//     }

    
//     return 0;
// }



// -=-------------------------------------


#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
long long a[maxN], t[4 * maxN]; 
// `a[]` = input array
// `t[]` = segment tree (4*n is enough size for segment tree)

// Function to build the segment tree
void build(int n, int b, int e) {
    // n = current tree node index
    // b = left boundary of current segment
    // e = right boundary of current segment

    if (b == e) {
        // Leaf node (single element segment)
        t[n] = a[b];
        return;
    }
    
    int mid = (b + e) / 2;
    int l = 2 * n;      // left child
    int r = 2 * n + 1;  // right child

    // Recursively build left and right child
    build(l, b, mid);
    build(r, mid + 1, e);

    // Internal node stores sum of left and right child
    t[n] = t[l] + t[r];
}

// Function to update a single element in the array
void update(int n, int b, int e, int i, int v) {
    // n = current tree node index
    // b, e = segment range for current node
    // i = position to update
    // v = new value to assign at a[i]

    if (i < b || i > e) {
        // Out of range → ignore
        return;
    }

    if (b == e) {
        // Leaf node → update value
        t[n] = v;
        return;
    }
    
    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    // Update left or right child depending on index
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);

    // Recalculate sum after update
    t[n] = t[l] + t[r];
}

// Function to query the sum in range [i, j]
long long query(int n, int b, int e, int i, int j) {
    // n = current tree node index
    // b, e = segment range for current node
    // i, j = query range

    if (e < i || j < b) {
        // Segment completely outside query range
        return 0;
    }

    if (b >= i && e <= j) {
        // Segment completely inside query range
        return t[n];
    }

    // Partial overlap → split into children
    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;   // n = size of array, m = number of queries

    // Input array (1-based index)
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Build segment tree from input array
    build(1, 1, n);

    while (m--) {
        int t;
        cin >> t;

        if (t == 1) {
            // Update operation
            int idx, v;
            cin >> idx >> v;
            idx++; // shifting from 0-based to 1-based index
            update(1, 1, n, idx, v);
        } else {
            // Query operation (range sum)
            int l, r;
            cin >> l >> r;
            l++; // shifting from 0-based to 1-based index
            long long ans = query(1, 1, n, l, r);
            cout << ans << endl;
        }
    }

    return 0;
}
