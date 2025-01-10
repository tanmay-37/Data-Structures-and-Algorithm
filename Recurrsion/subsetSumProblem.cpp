#include<bits/stdc++.h>
using namespace std;

int cntSubset(vector<int> v, int n, int sum){
    if(n == 0)
        return (sum == 0) ? 1 : 0;
    return cntSubset(v, n - 1, sum) + cntSubset(v, n - 1, sum - v[n - 1]);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    int sum;
    cin >> sum;
    
    int ans = cntSubset(v, n, sum);

    cout << ans << endl;
    return 0;
}