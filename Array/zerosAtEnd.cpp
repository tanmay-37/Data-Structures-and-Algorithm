#include<bits/stdc++.h>
using namespace std;

void moveToEnd(vector<int> &v){
    int cnt = 0;
    for (int i = 0; i < v.size();i++){
        if(v[i] != 0){
            swap(v[i], v[cnt]);
            cnt++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    moveToEnd(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
return 0;
}