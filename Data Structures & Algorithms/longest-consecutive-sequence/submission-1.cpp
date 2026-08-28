class Solution{
public:
    int longestConsecutive(vector<int>& nums) {
        // created an unordered set
        unordered_set<int> st;
        //  put all the array elemetn intot thje set 
        for(int num :nums){
            st.insert(num);
        }
        // check the longest element in an  set
        int longest = 0;
        // chekc every element in a set 
        for(int num: st){
            if(st.find(num - 1) == st.end()){
                int current = num;
                int count  =1;
                while(st.find(current+1)!=st.end()){
                    current++;
                    count++;
                    }
                    longest = max(longest,count);

                }
            }    
        
              
    
    return longest;
    }
};
