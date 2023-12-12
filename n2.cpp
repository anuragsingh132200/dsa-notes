#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    if(n==1)
        return 1;
    if(a[n-1]<a[n-2])
        return 0;
    return isSorted(n-1,a);
    

}



int main()
{
    
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i;
    cin >> i;
    cout << inverchew(i);

    return 0;
}