#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v, int low, int high){
    while(low < high){
        swap(v[low], v[high]);
        low++;
        high--;
    }
}

void leftRotate(vector<int> &v,int d){
    int n = v.size();
    reverse(v, 0, d - 1);
    reverse(v, d, n - 1);
    reverse(v, 0, n - 1);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    leftRotate(v, 2);
    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
    return 0;
}