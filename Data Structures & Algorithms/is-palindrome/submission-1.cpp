class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
      
        // we are using   whoile  lopp  because we wan to kepp checking the  character and we   need ti  check the character  multiple times  using  and move the pointer  foeward  t= right 
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
