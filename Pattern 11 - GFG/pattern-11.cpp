//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int x = 0;
        int y = 1;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<=i; j++)
            {
                if(i%2 == 0 && j % 2 == 0 || i == j ||i%2 && j%2 ){
                    cout<<y<<" ";
                }
                else{
                    cout<<x<<" ";
                }
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