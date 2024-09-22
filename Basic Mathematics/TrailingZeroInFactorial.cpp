#include<bits/stdc++.h>
using namespace std;

int trailingZeros(int n){
    int res = 0;
    for(int i = 5;i<=n;i=i*5){
        res += n/i;
    }
    return res;
}

int main(){
    int n;
    cin>>n;

    cout<<"Number of trailing zeros are "<<trailingZeros(n)<<"\n";
    
    return 0;
}