class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // store the  index number
        deque<int>dq;
        // store the result
        vector<int>result;
        // moving to right  side in the array 
         //to chekc the window
        for(int r = 0; r < nums.size(); r++ ){
            // now we wil remoev the element  outsude form the current window 
            if(!dq.empty() && dq.front() < r-k+1){
                // po the eleent
                dq.pop_front();
            }
            // while  to remove useless element and that are not  crratir than the current element so remoceve
            while(!dq.empty() && nums[dq.back()] < nums[r]){
                dq.pop_back();
            }
            // add the cureen elements
            dq.push_back(r);
            // if the  window is  complete  then 
            if(r >= k-1){
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
        
    }
};
