class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int>need;
        unordered_map<char , int>window;
        //  count the character in t string 
        for(char c :t){
            need[c]++;
        }
        // chekc those  requirement that has been  sastsified 
        int have  = 0;
        int needcount = need.size();
        // startt he two  pointer 
        int left  = 0;
        int right  = 0;
        // to fien dthe msallest  lghtn of tyhe strimg 
        int minlength = INT_MAX;
        // point to new index  for the smallest legth
        int start = 0 ; 
        while(right < s.length()){
            // add the cureent  element in the window
            char c = s[right];
            window[c]++;
            if(need.count(c) && window[c] == need[c]){
                have ++;
            }
            // windoe is valid or niot
            while(have == needcount){
                 // to chekc the length
                 if(right - left + 1 < minlength){
                    minlength = right - left +1;
                    start  = left ;

                 }
                 char leftchar = s[left];
                 window[leftchar]--;
                 if(need.count(leftchar) && window[leftchar] < need[leftchar]){
                    have --;
                 }
                 left ++;
            }
            right ++;

        }
        if(minlength == INT_MAX){
            return "";
        }
        return s.substr(start , minlength);

        
    }
};
