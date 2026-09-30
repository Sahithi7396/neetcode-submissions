class Solution {
public:
    bool isAnagram(string s, string t) {
     vector<int>hash(26,0);
     for(char ch:s)
     {
        hash[ch-'a']++;
     }
     for(char ch:t)
     {
        hash[ch-'a']--;
     }
     for(int x:hash)
     {
        if(x!=0)
        return false;
     }
     return true;
    }
};
