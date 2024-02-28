//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        
        // range of the integer is 2^31 thence we cant change large string into int 
        
        // divisiblity test of 8 .. last 3 digit is divisble by 8 
        
        
        int n = s.size();
        if(n<=3){
            int nums = stoi(s);
            if(nums%8 == 0){
                return 1;
            }
            else {
                return -1;
            }
        }
        
        string str =  s.substr(n-3);  // this function gets the string from n-3 index till end 
        
        int nums =  stoi(str);
        if((nums % 8)==0) return 1;
        else {
            return -1;
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends