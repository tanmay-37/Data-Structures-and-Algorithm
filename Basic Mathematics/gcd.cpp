#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(a != b){
        if(a>b) a -= b;
        else b-= a;
    }
    return a;
}

int efficiantGCD(int a,int b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<"\n";

    cout<<"GCD of "<<a<<" and "<<b<<" with efficiant code is "<<efficiantGCD(a,b)<<"\n";
    
    return 0;
}