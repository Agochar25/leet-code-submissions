class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
      
        // to check the positon of the  character in a string  witht he help of  two
        while(left<right){
            // now  check the   starting form tthe left pointer is  alphanumeric 
        if(!isalnum(s[left])){
            left ++;
            continue;
        }
        // now check the starting fiormn the right  pointer is alphanumeric
        if(!isalnum(s[right])){
            right --;
            continue;
        }
            if(tolower(s[left]) != tolower(s[right])){
            return false ;
        }
        left ++;
        right --;

        }
        return true;
    
        
        
    }
};
