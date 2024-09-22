#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int fact(int n){
        if(n == 0 || n == 1) return 1;
        return n * fact(n-1);
    }

    int digitsInFactorial(int N)
    {
        // code here
        
        long long num = fact(N);
        
        int cnt = 0;
        while(num != 0){
            num /=10;
            cnt++;
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}