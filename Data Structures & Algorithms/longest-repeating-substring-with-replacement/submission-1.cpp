class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char , int >freq;
         //
         int left  = 0;
         // cunt the maximmum number of charavcter has been occured 
          int maxfreq = 0;
          int result  = 0;
        // move the  right pointer 
        for( int right  = 0; right< s.length(); right++){
            // count he  charactewr 
            freq[s[right]]++;
            //  check trhe max freq
             maxfreq = max(maxfreq ,freq[s[right]] );
              int windowlength = right - left +1;
              int replacement = windowlength - maxfreq;
              // replacement is grstor than  k  so to chekc 
              while(replacement > k){
                freq[s[left]]--;
                left ++;
                 windowlength = right - left +1;
                 replacement = windowlength - maxfreq;
              }
              result = max(result , right -left +1);


        }
        return result;

    }
};