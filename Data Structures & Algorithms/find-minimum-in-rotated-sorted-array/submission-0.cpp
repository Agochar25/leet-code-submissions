class Solution {
public:
    int findMin(vector<int> &nums) {
        // two boundary we are taking 
         int left = 0; 
         int right  = nums.size() - 1;
         // now  chekc the condition 
          while(left < right){
            int mid = left + (right - left)/2;
            if(nums[mid] > nums[right]){
                left  =  mid  +1;
            }
            else{
                right  = mid;
            }
          }
          return nums[right] ;

        
    }
};
