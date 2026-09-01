class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> characters;
        // putting the left pointer as  0 
        int l = 0;
        // putting the  max  lenft6h of the substring  as  0
         int res = 0;
        // then check for the duplicate element
        for( int r = 0; r<s.length(); r++){
            while(characters.find(s[r]) != characters.end())
            {
            characters.erase(s[l]);
            l++;
            }
            // if no duplicate is found  opr ther  duplicastye has been  removed thren 
        characters.insert(s[r]);
        res = max(res, r-l+1);
        

        }
        
        return res;
        
        
    }

};
