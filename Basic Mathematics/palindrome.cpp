#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int reverse = 0;
    int temp = n;
    while(temp != 0){
        reverse = (reverse*10) + (temp%10);
        temp /= 10;
    }
return (reverse == n);
}

int main(){
    int n;
    cin>>n;

    if(isPalindrome(n)) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    
    return 0;
}