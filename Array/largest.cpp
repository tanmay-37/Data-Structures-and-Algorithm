#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> v){
    int res = 0;
    for (int i = 0; i < v.size();i++){
        if(v[i] > v[res])
            res = i;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    cout << v[largest(v)];
    return 0;
}