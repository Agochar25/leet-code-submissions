class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size());
        int prefix = 1;
        for(int i =0; i<nums.size();i++){
            output[i] = prefix;
            prefix = output[i]* nums[i];
        }
        int suffix = 1;
        for(int i = nums.size()-1; i>=0; i--){
            output[i] = output[i]*suffix;
            suffix = suffix *nums[i];
        }
        return output;

        

    }
};
