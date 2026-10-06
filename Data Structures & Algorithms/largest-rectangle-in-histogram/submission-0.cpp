class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // create  the stack first
        stack<int>st;
        // intialize the max area  =  0
        int maxArea = 0;
        // now v=compare with the heightsize 
         for(int i = 0; i <= heights.size(); i++){
            int currentHeight ;
            //   now writhing this so that to claclutae the are of the stack faster by popping the elemnt 
            if(i == heights.size()){
                currentHeight = 0;
            }
            else{
                currentHeight = heights[i];
            }
            while(!st.empty() && heights[st.top()]  > currentHeight){
                int height = heights[st.top()];
                st.pop();
                // creathe vasirable name  width
                int width ;
                if(st.empty()){
                    width  = i;
                }
                // wrote this if the stack is nit empty 
                else{
                    width = i - st.top() - 1;

                }
                // calcukate area 
                int area  =  height *  width ;
                maxArea = max(maxArea , area);
            }
            st.push(i);

         }
         return maxArea;
        
    }
};
