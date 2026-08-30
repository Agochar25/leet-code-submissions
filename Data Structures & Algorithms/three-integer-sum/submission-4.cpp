class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        //sort the array
        sort(nums.begin(),nums.end());
        // fix the position
        for( int i = 0; i<nums.size();i++){
            //skip  the duplicate
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
             int left  = i+1;
             int right = nums.size()-1;
             // use two pointer array to   see the condition 
             while(left < right){
                int sum = nums[i] + nums[left] + nums[right];\
                // case 1  if sum is less thasn zero
                if(sum < 0){
                    left ++;
                }
                // case 2 
                else if(sum > 0){
                    right --;
                }
                else{
                    result.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });
                left ++;
                right --;
                // found duplicate in left then skip  the duplicate 
                while(left<right &&nums[left]==nums[left-1]){
                    left ++;
                }
                
                }
                
                

             }


        }
        return result;

        
    }
};
