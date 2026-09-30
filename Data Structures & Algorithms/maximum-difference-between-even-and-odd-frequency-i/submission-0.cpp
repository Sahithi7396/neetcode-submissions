class Solution {
public:
    int maxDifference(string s) {
        int n=s.size();
        int maxodd=INT_MIN;
        int mineven=INT_MAX;
        int large=INT_MIN;
        for(int i=0;i<n;i++)
        {
            large=max(large,s[i]-'a');
        }
        vector<int>hash(large+1,0);
        for(int i=0;i<n;i++)
        {
            hash[s[i]-'a']++;
        }
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]%2!=0)
            maxodd=max(maxodd,hash[i]);
            if(hash[i]%2==0 &&hash[i]!=0)
            mineven=min(mineven,hash[i]);
        }
        return maxodd-mineven;

        











        
    }
};