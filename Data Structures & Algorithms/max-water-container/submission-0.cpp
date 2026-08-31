class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int maxWater = 0;
        // now check the condtion of the two poibter 
        while(left < right){
            // calcuate the width
             int width = right - left;
            // then now  calulate the  hight 
            int h = min(heights[left] , heights[right]);
            // now calculate the area
             int area = width * h;
            maxWater = max(maxWater,area);
            if(heights[left]< heights[right]){
                left ++;
            }
            else{
                right --;
            }
        }
        return maxWater;

        
    }
};
