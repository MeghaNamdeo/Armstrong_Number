
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
  int Arm(int n )
  {
      int sum = 0 ;
      while(n>0)
      {
          int ld= n %10;
          sum = sum + (ld*ld*ld);
          n = n / 10;
          
      }
      return sum;
  }
  
    string armstrongNumber(int n){
      int A=Arm(n);
        if(n==A)
        return "Yes";
        else
        return "No";
      
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
