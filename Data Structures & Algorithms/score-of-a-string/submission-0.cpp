class Solution {
public:
    int scoreOfString(string s) {
      int n=s.size();
      int sum=0;
      for(int i=1;i<n;i++)
      {
        int diff= abs(s[i]-s[i-1]);
        sum=sum+diff;
      }
      return sum;

        
    }
};