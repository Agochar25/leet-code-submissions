class Solution {
public:
    int search(vector<int>& nums, int target) {
         // crating the two boundary 
         int left  = 0;
         int right  = nums.size() - 1;
         // check the condition 
         while(left <= right){
            int mid  = left + (right - left) / 2;
            if(nums[mid] == target){
                return mid ;
            }
            // ten we need to chekc  if we are finding out he target element so we need to chekdc that  if thw array is rotated then  their is  tiwo part of sorted array  so condition is that the on eside of the array should be sorted
            // check that the  array in the  left side is sorted or not 
            if(nums[left] <= nums[mid]){
                if(nums[left] <= target && target < nums[mid]){
                    right = mid -1;
                }
                else{
                    left = mid +1;
                }
                
            
            }
            // if the left array is not sorted then  then we need to chekc for the right 
            else{
                if(nums[mid] <= target && target <= nums[right]){
                    left = mid +1;
                }
                else{
                    right  =  mid -1;
                }
            }
            
         }
         return -1;
        
        
    }
};
