class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // intialize all the cureent temperaute imn the stack as zero
        vector<int>result(temperatures.size(),0);
        // crete the tsack that store the index not the value of tmerpersture
        stack<int>st;
        // go thorough every  element of the temperature of an array
        for(int i = 0; i <temperatures.size(); i++){
            // current temperatures is  creotr than there top of the elemets present in the stack  anfd the current stack shpoudl not be empty
            while(!st.empty()&&temperatures[i]>temperatures[st.top()])
            {
                // if the curent element is 
                int prevday = st.top();
                st.pop();
                result[prevday] = i- prevday;

            }
            st.push(i);
        }
        return result;
        
    }
};
