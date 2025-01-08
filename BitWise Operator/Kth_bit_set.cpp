#include<bits/stdc++.h>
using namespace std;

void isSet(int n, int k){
    int x = (1<<(k-1));

    if((n & x) != 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main(){
    int n,k;
    cin>>n>>k;

    isSet(n,k);
    
    return 0;
}