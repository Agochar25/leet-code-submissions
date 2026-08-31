class Solution {
public:
    int trap(vector<int>& height) {
        // taking the two  pointer for both the end
        int left = 0;
        int right = height.size()-1;
        //means seen the tallest side of the wall from the both the side
        int leftmax = 0;
        int rightmax = 0;
        // here the water capacity is zero  how much water is filled 
        int water =0;
    // now checking the condition 
        while(left < right){
            // compare the height 
            if(height[left] <= height[right]){
                if(height[left]>leftmax){
                    leftmax = height[left];
                }
            else{
                water += leftmax - height[left];

            }
            left ++;


            }
            else{
                if(height[right]>rightmax){
                    rightmax = height[right];
                }
                else{
                    water += rightmax - height[right];
                }
                right --;
        }
        }
        return water ;

        
    }
};
