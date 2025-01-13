#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v){
    int low = 0, high = v.size() - 1;
    while(low<high){
        swap(v[low], v[high]);
        low++;
        high--;
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

    reverse(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
    return 0;
}