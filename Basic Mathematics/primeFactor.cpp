#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n){
    for(int i = 2;i*i<=n;i++){
        while(n%i == 0){
            cout<<i<<" ";
            n /= i;
        }
    }
    if(n>1) cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    primeFactor(n);
    
    return 0;
}