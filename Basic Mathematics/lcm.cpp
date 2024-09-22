#include<bits/stdc++.h>
using namespace std;

int efficiantGCD(int a,int b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b)<<"\n";
    
    return 0;
}