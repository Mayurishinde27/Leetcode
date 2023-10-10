//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i = 0; i<n; i++)
        {
            // space
            
            for(int j = 0; j<n-i-1; j++)
            {
                cout<<" ";
            }
            
            // star
            char ch = 'A';
            
            int n = ((2*i+1)/2)+1;
            
            for(int j = 0; j<n; j++)
            {
                cout<<ch;
                ch++;
            }
            ch--;
            int p = (2*i+1) - n;
            for(int j = 0; j<p; j++)
            {
                ch--;
                cout<<ch;
                
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends