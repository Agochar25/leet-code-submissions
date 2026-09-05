class Solution {
public:
    bool isValid(string s) {
        // the  sgtring basuica;;y contain ther characyer that is why intialized the stack as the char 
        stack<char>st;
        // to check the  every element oif the string 
        for(char c:s){
            if((c == '(') || (c == '{') || (c =='['))
            {
                st.push(c);
            }
            else{
                if(st.empty())
                {
                    return false;

                }
                if((c == ')' && st.top() != '(') || 
                   (c == '}' && st.top() != '{') ||
                   (c == ']'&& st.top() !='[')){
                return false;
            }
            st.pop();
                
            }
            
           

        }
        return st.empty();

        
    }
};
