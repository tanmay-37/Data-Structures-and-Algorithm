#include<bits/stdc++.h>
using namespace std;

int search(vector<int> v, int k){
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == k)
            return i;
    }
        return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int k;
    cin >> k;
    int ans = search(v, k);

    cout<< ans;
    return 0;
}