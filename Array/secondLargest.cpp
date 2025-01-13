 #include<bits/stdc++.h>
 using namespace std;

int secondLargest(vector<int> v){
    int res = -1, largest = 0;

    for (int i = 1; i < v.size();i++){
        if(v[i] > v[largest]){
            res = largest;
            largest = i;
        }
        else if(v[i] != v[largest]){
            if(res != -1 || v[i] > v[res])
                res = i;
        }
    }
    return res;
}

 int main(){
     int n;
     cin >> n;
     vector<int> v(n);
     for (int i = 0; i < n; i++)
     {
         cin >> v[i];
     }

     cout << secondLargest(v);
     return 0;
 }