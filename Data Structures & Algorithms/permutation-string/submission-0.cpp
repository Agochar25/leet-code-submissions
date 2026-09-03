class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // check the condiotion 
        if(s1.length()>s2.length()){
            return false;
        }
        // create  two count
         array<int,26>count1 = {};
         array<int,26>count2 = {};
        //  count for s1
        for(char c:s1){
            count1[c- 'a']++;
        }
        // create the winodw for  s2
        for(int i = 0; i< s1.length();i++){
            count2[s2[i]-'a']++;
        }
        if(count1 == count2){
            return  true;
        }
        // if false 
        int left = 0;
        for( int right = s1.length(); right < s2.length(); right++){
            // adding the  new character 
            count2[s2[right] - 'a']++;
            // removeuing the one charactyer form left hand  side  because we are putting rthew new character  form right side
            count2[s2[left] - 'a']--;
            left ++;
            // again  compare
            if(count1 == count2){
                return  true;
            }

        }
        return  false;
    
        
    }
};
